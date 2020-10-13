#include<bits/stdc++.h>
#define int long long int
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define repr(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pf push_front
#define mp make_pair
#define s second
#define f first
// #define p pair<int,int>
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
int ind(vi arr, int n, int x, int p) {
	int mini = mod, index = 0;
	rep(i, 0, n - 1) {
		if (arr[i] == x) {
			if (mini > abs(p - i)) {
				index = i;
				mini = abs(p - i);
				break;
			}
		}
	}
	return index;
}

void solve() {
	int n, x, p, k;
	cin >> n >> x >> p >> k;
	vi arr;
	rep(i, 0, n - 1) {
		int a;
		cin >> a;
		arr.pb(a);
	}
	sort(all(arr));
	int cnt = 0;
	int m = ind(arr, n, x, p);
	if (arr[m] != x) {
		arr[k - 1] = x;
		sort(all(arr));
		cnt++;
	}
	if ((p > k && arr[p - 1] > x) || (p < k && arr[p - 1] < x)) {
		cout << -1 << endl;
		return;
	}
	if (arr[p - 1] == x) {
		cout << cnt << endl;
		return;
	}
	m = ind(arr, n, x, p) + 1;
	cnt = abs(p - m) + cnt;
	cout << cnt << endl;
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