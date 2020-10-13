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
	string s, ans;
	cin >> s;
	for (auto &a : s) {
		string k;
		if (isupper(a)) {
			a = tolower(a);
		}
		if (!(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')) {
			k = '.';
			ans += k;
			ans += a;
		}
	}
	cout << ans << endl;
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