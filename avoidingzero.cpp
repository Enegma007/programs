#include<bits/stdc++.h>
#define int long long int
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define repr(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pf push_front
#define mp make_pair
#define s second
#define f first
#define p pair<int,int>
#define vi vector<int>
#define space " "
#define endl "\n"
#define mod 1000000007
#define all(v) (v).begin(),(v).end()
#define gcd(a,b) __gcd(a,b)
#define size(v)   ((int)(v.size()))
#define mem(a,val)   memset(&a,val,sizeof(a))
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int power(int x, int y, int a)
{
	int r = 1; // Initialize result

	x = x % a; // Update x if it is more than or
	// equal to p

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			r = (r * x) % a;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % a;
	}
	return r;
}
void solve() {
	int n;
	cin >> n;
	vi arr(n);
	int sum = 0;
	rep(i, 0, n - 1) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum == 0) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	sort(all(arr));
	if (sum > 0) {
		reverse(all(arr));
		for (const auto &a : arr) {
			cout << a << space;
		}
		cout << endl;
		return;
	}
	for (const auto &a : arr) {
		cout << a << space;
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
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
