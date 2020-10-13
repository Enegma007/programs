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
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve() {
	string s, s1;
	cin >> s;
	s1 = s;
	int k = 0;
	for (int i = 0; i < s.length(); i++) {
		string left, right;
		left = s1.substr(1, s1.length() - 1) + s1[0];
		right = s1[s1.length() - 1] + s1.substr(0, s1.length() - 1);
		// cout << left << space << right << endl;

		if (left == right) {
			cout << k << endl;
			// cout << left << endl;
			break;
		}
		else {
			s1 = s1.substr(1, s1.length() - 1);
			k++;
			// cout << s << endl;
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
	w(t) {
		solve();
	}
	return 0;
}