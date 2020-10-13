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
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		// cin >> arr[i];
		int x;
		cin >> x;
		if (x % 2 != i % 2) {
			if (i % 2 == 0) {
				a++;
			}
			else {
				b++;
			}
		}
	}
	// cout << count << endl;
	if (a != b) {
		cout << -1 << endl;
	}
	else {
		cout << a << endl;
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