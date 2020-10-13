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
#define end "\n"
#define mod 1e9+7
#define all(v) (v).begin(),(v).end()
#define gcd(a,b) __gcd(a,b)
#define size(v)   ((int)(v.size()))
#define mem(a,val)   memset(&a,val,sizeof(a))
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void print3() {
	cout << 2 << space << 3 << space << 1 << space;
}
int ispoweroftwo(int a) {
	return ceil(log2(n)) == floor(log2(n));
}
void solve() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << end;
	}
	else if (ceil(log2(n)) == floor(log2(n))) {
		cout << -1 << end;
		// return;
	}
	else if (n == 3) {
		print3();
		cout << end;
	}
	else {
		print3();
		int i = 4;
		while (i <= n) {
			if (ispoweroftwo(i)) {
				cout << i + 1 << space << i << space;
				i += 2;
			}
			else {
				cout << i << space;
				i++;
			}
		}
		cout << end;
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
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}