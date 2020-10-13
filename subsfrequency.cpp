#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
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
using namespace boost::multiprecision;
using namespace std;
int power(int x, int y) {
	int rem = 1000000007;
	int temp = 0;
	if (y == 0) {
		return 1;
	}
	temp = power(x, y >> 1);
	if (y % 2 == 0) {
		return ((temp % rem) * (temp % rem)) % rem;
	}
	else {
		return (x * ((temp * temp) % rem)) % rem;
	}
}
void solve() {
	int n;
	cin >> n;
	// int ar(n + 1);
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		// ar.pb(a);
	}
	// print(2, n - 1);
	// int po = power(2, n);
	for (int i = 1; i <= n; i++) {
		cout << power(2, n - i) << space;
	}
	cout << endl;
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
	// end = clock();
	// double timetaken = double(end - start) / double(CLOCKS_PER_SEC);
	// cout << "Time taken:" << fixed << space << timetaken << setprecision(5) << endl;
	return 0;
}
// 3 1
// 2 3
