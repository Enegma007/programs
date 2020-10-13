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
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> m;
	for (const auto &a : s) {
		if (m[a]) {
			m[a]++;
		}
		else {
			m[a] = 1;
		}
	}
	int c = 0;
	for (const auto &e : m) {
		if ((e.s) % 2 == 0) {
			c = 1;
		}
		else {
			c = 0;
			break;
		}
	}
	if (c) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
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
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		cin >> n;
// 		string st;
// 		cin >> st;
// 		if (n % 2 == 0) {
// 			cout << "YES" << endl;
// 		}
// 		else {
// 			cout << "NO" << endl;
// 		}
// 		return 0;
// 	}
// }