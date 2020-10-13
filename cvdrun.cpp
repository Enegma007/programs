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
void solve() {
	int n, x, y, k;
	cin >> n >> k >> x >> y;
	int flag = 0;
	if (n < y)
		flag = 0;
	else {
		rep(i, 0, n - 1) {
			int j = i + 1;
			if ((x + k * j) % n == y) {
				flag = 1;
				break;
			}
		}
		if (flag)
			cout << "YES" << end;
		else
			cout << "NO" << end;
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