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
// void buildsegment(vi &arr, vi &tree, int node, int start, int end) {
// 	if (start == end) {
// 		tree[node] = arr[start];
// 		return;
// 	}
// 	int mid = (start + end) / 2;
// 	buildsegment(arr, tree, 2 * node + 1, start, mid);
// 	buildsegment(arr, tree, 2 * node + 2, mid + 1, end);
// 	tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
// }
// void updatesegment(vi &arr, vi &tree, int node, int start, int end, int idx, int val) {
// 	if (start == end) {
// 		arr[idx] = val;
// 		tree[node] = val;
// 	}
// 	else {
// 		int mid = (start + end) / 2;
// 		if (start <= idx && idx <= mid) {
// 			updatesegment(arr, tree, 2 * node + 1, start, mid, idx, val);
// 		}
// 		else {
// 			updatesegment(arr, tree, 2 * node + 2, mid + 1, end, idx, val);
// 		}
// 		tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
// 	}
// }
// int rmquery(vi &tree, int node, int start, int end, int l, int r) {
// 	if (l > end || start > r) {
// 		return INT_MAX;
// 	}
// 	if (l <= start && r >= end) {
// 		return tree[node];
// 	}
// 	int mid = (start + end) / 2;
// 	int p1 = rmquery(tree, 2 * node + 1, start, mid, l, r);
// 	int p2 = rmquery(tree, 2 * node + 2, mid + 1, end, l, r);
// 	// cout << min(p1, p2) << endl;
// 	return (min(p1, p2));
// }
// int lcm(int a, int b) {
// 	return (a * b) / gcd(a, b);
// }
// int power(uint x, int y, int p)
// {
// 	uint r = 1; // Initialize result

// 	x = x % p; // Update x if it is more than or
// 	// equal to p

// 	while (y > 0) {
// 		// If y is odd, multiply x with result
// 		if (y & 1)
// 			r = (r * x) % p;

// 		// y must be even now
// 		y = y >> 1; // y = y/2
// 		x = (x * x) % p;
// 	}
// 	return r;
// }
void solve() {
	int n, k;
	cin >> n >> k;
	vi arr(n);
	rep(i, 0, n - 1) {
		cin >> arr[i];
	}
	int cnt = 0, i;
	for (i = 0; i <= n - 1; i++) {
		if (arr[i] >= k) {
			arr[i + 1] = (arr[i] - k) + arr[i + 1];
			cnt++;
		}
		if (k > arr[i])
			break;
	}
	if (i == n)
		cnt += ((arr[n - 1] - k) / k);
	cout << cnt + 1 << end;

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