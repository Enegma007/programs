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
void solve() {
	int n;
	cin >> n;
	unordered_map<int, int> m;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (m[a]) {
			m[a]++;
		}
		else {
			m[a] = 1;
		}
	}
	for (const auto a : m) {
		for (const auto b : m) {
			if (a.f != b.f) {
				if (a.s == b.s) {
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
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