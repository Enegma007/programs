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
// void buildsegment(vi &arr, vi &tree, int node, int start, int end) {
// 	if (start == end) {
// 		tree[node] = arr[start];
// 		return;
// 	}
// 	int mid = (start + end) / 2;
// 	buildsegment(arr, tree, 2 * node + 1, start, mid);
// 	buildsegment(arr, tree, 2 * node + 2, mid + 1, end);
// 	tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
// }
// void updatesegment(vi &arr, vi &tree, int node, int start, int end, int idx, int val) {
// 	if (start == end) {
// 		arr[idx] = val;
// 		tree[node] = val;
// 	}
// 	else {
// 		int mid = (start + end) / 2;
// 		if (start <= idx && idx <= mid) {
// 			updatesegment(arr, tree, 2 * node + 1, start, mid, idx, val);
// 		}
// 		else {
// 			updatesegment(arr, tree, 2 * node + 2, mid + 1, end, idx, val);
// 		}
// 		tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
// 	}
// }
// int rmquery(vi &tree, int node, int start, int end, int l, int r) {
// 	if (l > end || start > r) {
// 		return INT_MAX;
// 	}
// 	if (l <= start && r >= end) {
// 		return tree[node];
// 	}
// 	int mid = (start + end) / 2;
// 	int p1 = rmquery(tree, 2 * node + 1, start, mid, l, r);
// 	int p2 = rmquery(tree, 2 * node + 2, mid + 1, end, l, r);
// 	// cout << min(p1, p2) << endl;
// 	return (min(p1, p2));
// }
string sol(char a, int mul) {
	string s = "";
	if (mul) {
		for (int i = 0; i < mul; i++) {
			s += a;
		}
	}
	return s;
}
bool check(string ans, string pa) {
	bool f = false;
	for (const auto &a : ans) {
		if (a >= pa[0]) {
			f = true;
			break;
		}
	}
	return f;
}
void solve() {
	string s, pa;
	cin >> s;
	cin >> pa;
	// string ans = pa;
	map<char, int> m;
	for (const auto &a : s) {
		if (m.find(a) == m.end()) {
			m.insert(mp(a, 1));
		}
		else {
			m[a]++;
		}
	}
	for (const auto &a : pa) {
		m[a]--;
		if (m[a] <= 0) {
			m.erase(a);
		}
	}
	vector<string> zz;
	// zz.pb(pa);
	for (const auto &a : m) {
		zz.pb(sol(a.first, a.second));
	}
	sort(zz.begin(), zz.end());
	string ans = "";
	for (const auto &a : zz) {
		ans += a;
	}
	// cout << ans << endl;
	int flag = false;
	for (int i = 1; i < pa.length(); i++) {//z>a and a<z;
		if (pa[i] < pa[i - 1]) {
			flag = true;
			break;
		}
		else if (pa[i] > pa[i - 1]) {
			// continue;
			flag = false;
			break;
		}
		else {
			continue;
		}
	}
	// cout << flag << endl;
	if (check(ans, pa)) {
		for (int i = 0; i < ans.length(); i++) {
			// if (i == ans.length() - 1  && ans[i] != pa[0]) {
			// 	ans.insert(ans.length(), pa);
			// 	break;
			// }
			if (ans[i] > pa[0]) {
				ans.insert(i, pa);
				break;
			}
			else if (ans[i] == pa[0]) {
				if (flag) {
					ans.insert(i, pa);
					break;
				}
			}
		}
	}
	else {
		ans.insert(ans.length(), pa);
	}
	cout << ans << endl;
	// string s = "as";
	// s.insert(1, "sa");
	// cout << s << endl;
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
// aaplmiikkloo
// aaplmiikkloo
// 5
// akramkeeanany
// aka
// supahotboy
// bohoty
// daehabshatorawy
// badawy
// akapiolkmloi
// plm
// asas
// sa