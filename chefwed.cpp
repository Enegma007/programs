#include<bits/stdc++.h>
#define int long long
#define w(t) int t;cin>>t;while(t--)
#define fori(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define p pair<int,int>
#define vi vector<int>
#define space " "
#define endl "\n"
#define mod 10e9
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int freq(vi arr, int k) {
	if (arr.size() != 0) {
		vector<bool> vis(101, false);
		vi v(101, 0);
		for (int i = 0; i < arr.size(); i++) {
			// cout << arr[i] << space;
			v[arr[i]]++;
		}
		// cout << endl;
		int sum = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (!vis[arr[i]]) {
				if (v[arr[i]] > 1) {
					sum += v[arr[i]];
					vis[arr[i]] = true;
				}
			}
		}
		vector<int> ans[arr.size() + 1];
		int c = 0;
		for (const auto a : arr) {
			if (find(ans[c].begin(), ans[c].end(), a) != ans[c].end()) {
				c += 1;
			}
			ans[c].pb(a);
		}
		c += 1;
		int x = c * k;
		int y = sum + k;
		// cout << min(x, y) << endl;
		return y;
	}
	else {
		return 0;
	}
}
void solve() {
	int n, k;
	cin >> n >> k;
	vi arr(n), v(101, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		v[arr[i]]++;
	}
	if (k < 2) {
		vector<bool> vis(101, false);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (!vis[arr[i]]) {
				if (v[arr[i]] > 1) {
					sum += v[arr[i]];
					vis[arr[i]] = true;
				}
			}
		}
		vector<int> ans[n + 1];
		int c = 0;
		for (const auto a : arr) {
			if (find(ans[c].begin(), ans[c].end(), a) != ans[c].end()) {
				c += 1;
			}
			ans[c].pb(a);
		}
		c += 1;
		int x = c * k;
		int y = sum + k;
		cout << min(x, y) << endl;
	}
	else {
		// int s(n + 1);
		int aa = 10e9;
		for (int i = 0; i < n; i++) {
			vi m = vi(arr.begin(), arr.begin() + i + 1);
			vi n = vi(arr.begin() + i + 1, arr.end());
			// aa = min(aa, freq(m, v, k) + freq(n, v, k));
			// s.pb(freq(m, v, k) + freq(n, v, k));
			int b = freq(m, k);
			int c = freq(n, k);
			// cout << b << space << c << endl;
			aa = min(aa, b + c);
		}
		cout << aa << endl;
	}
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
//7 2
//3 5 4 5 1 3 3
//3 5 4
//5 1
//3
//3
// 5
// 5 1
// 5 1 3 3 3
// 5 14
// 1 4 4 4 4
// 5 2
// 3 5 4 5 1
// 10 3
// 1 1 2 2 3 3 4 4 5 5
// 10 2
// 1 1 1 1 1 1 1 1 100 9