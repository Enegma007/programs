#include<bits/stdc++.h>
#define int long long
#define w(t) int t;cin>>t;while(t--)
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define p pair<int,int>
#define vi vector<int>
#define space " "
#define endl "\n"
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve() {
	// int x, y, z;
	// cin >> x >> y >> z;
	// if (x == y || y == z || z == x) {
	// 	cout << "YES" << endl;
	// 	cout << x << space << x - 1 << space << x - 2 << endl;
	// }
	// else {
	// 	cout << "NO" << endl;
	// }
	// int k = 3;
	int k;
	cin >> k;
	while (k--) {
		vector<int> v(3);
		for (auto &a : v) {
			cin >> a;
		}
		sort(v.begin(), v.end());
		if (v[1] != v[2])
		{
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			cout << v[0] << space << v[0] << space << v[2] << endl;
		}
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
	// w(t) {
	// 	solve();
	// }
	solve();
	return 0;
}