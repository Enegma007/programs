#include<bits/stdc++.h>
#define int long long
#define w(t) int t;cin>>t;while(t--)
#define pb push_back
#define mp make_pair
#define s second
#define f first
// #define p pair<int,int>
#define vi vector<int>
#define space " "
#define endl "\n"
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void dfs(vi arr[], vi p, vi a, vi &b, vi &ans, vector<bool> &vis, int i, int day, int city) {
	vis[i] = true;
	for (const auto &c : arr[i]) {
		if (!vis[c]) {
			b[c] -= min(a[city], b[c]);
			if (b[c] <= 0 && ans[c] == -1) {
				ans[c] = day;
			}
			// for (int j = 0; j < arr[c].size(); j++) {
			// 	if (arr[c][j] == city) {
			// 		arr[c].erase(arr[c].begin() + j);
			// 		break;
			// 	}
			// 	else {
			// 		continue;
			// 	}
			// }
			arr[c].erase(remove(arr[c].begin(), arr[c].end(), city), arr[c].end());
			dfs(arr, p, a, b, ans, vis, c, day, city);
		}
	}
}
void solve() {
	int n;
	cin >> n;
	vi arr[n + 1];
	for (int i = 1; i <= n - 1; i++) {
		int u, v;
		cin >> u >> v;
		arr[u].pb(v);
		arr[v].pb(u);
	}
	vi p(n + 1), a(n + 1), b(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	vi ans(n + 1, -1);
	for (int i = 1; i <= n; i++) {
		vector<bool> vis(n + 1, false);
		int curcity = p[i];
		b[p[i]] = b[p[i]] - min(a[p[i]], b[p[i]]);
		if (b[p[i]] <= 0 && ans[curcity] == -1) {
			ans[p[i]] = i;
		}
		dfs(arr, p, a, b, ans, vis, curcity, i, curcity);
		arr[curcity].clear();
	}
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << space;
	}
	cout << endl;
}
int32_t main() {
#ifndef ONLINE_JUDGE
	//read input into input.txt
	freopen("input.txt", "r", stdin);
	//write output into output.txt
	freopen("output.txt", "w", stdout);
#endif
	fastio;
	w(t) {
		solve();
	}
	return 0;
}