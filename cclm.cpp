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
	int arr[n];
	int flag = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			flag = 1;

		}
	}
	if (flag) {
		cout << "NO" << endl;

	}
	else {
		cout << "YES" << endl;
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