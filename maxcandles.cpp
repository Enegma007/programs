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
void buildsegment(vi &arr, vi &tree, int node, int start, int end) {
	if (start == end) {
		tree[node] = arr[start];
		return;
	}
	int mid = (start + end) / 2;
	buildsegment(arr, tree, 2 * node + 1, start, mid);
	buildsegment(arr, tree, 2 * node + 2, mid + 1, end);
	tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
}
void updatesegment(vi &arr, vi &tree, int node, int start, int end, int idx, int val) {
	if (start == end) {
		arr[idx] = val;
		tree[node] = val;
	}
	else {
		int mid = (start + end) / 2;
		if (start <= idx && idx <= mid) {
			updatesegment(arr, tree, 2 * node + 1, start, mid, idx, val);
		}
		else {
			updatesegment(arr, tree, 2 * node + 2, mid + 1, end, idx, val);
		}
		tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
	}
}
int rmquery(vi &tree, int node, int start, int end, int l, int r) {
	if (l > end || start > r) {
		return INT_MAX;
	}
	if (l <= start && r >= end) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	int p1 = rmquery(tree, 2 * node + 1, start, mid, l, r);
	int p2 = rmquery(tree, 2 * node + 2, mid + 1, end, l, r);
	// cout << min(p1, p2) << endl;
	return (min(p1, p2));
}
void solve() {
	int n, m, x, y, ans, tootal, dif;
	cin >> n >> m >> x >> y;
	// int ans;
	tootal = n * m;
	dif = y - x;
	if (n == 1 && m == 1) {
		cout << x << endl;
		return;
	}
	else {
		if (tootal % 2 == 1) {
			tootal = tootal >> 1;
			ans = ((tootal + 1) * x) + (tootal * dif);

		}
		else {
			ans = ((tootal >> 1) * x) + ((tootal >> 1) * dif);

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
	w(t) {
		solve();
	}
	return 0;
}