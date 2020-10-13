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
	int n, ans = 0;
	cin >> n;
	int arr[n][3];
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				count++;
			}

		}
		if (count >= 2) {
			ans++;
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