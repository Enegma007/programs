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
void build(vi &arr, vi &tree, int node, int start, int end) {
	if (start == end) {
		tree[node] = arr[start];
		return;
	}
	int mid = (start + end) / 2;
	build(arr, tree, 2 * node + 1, start, mid);
	build(arr, tree, 2 * node + 2, mid + 1, end);
	tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
}
void update(vi &arr, vi &tree, int node, int start, int end, int idx, int val) {
	if (start == end) {
		arr[idx] = val;
		tree[node] = val;
	}
	else {
		int mid = (start + end) / 2;
		if (start <= idx && idx <= mid) {
			update(arr, tree, 2 * node + 1, start, mid, idx, val);
		}
		else {
			update(arr, tree, 2 * node + 2, mid + 1, end, idx, val);
		}
		tree[node] = min(tree[2 * node + 1] , tree[2 * node + 2]);
	}
}
int query(vi &tree, int node, int start, int end, int l, int r) {
	if (l > end || start > r) {
		return INT_MAX;
	}
	if (l <= start && r >= end) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	int p1 = query(tree, 2 * node + 1, start, mid, l, r);
	int p2 = query(tree, 2 * node + 2, mid + 1, end, l, r);
	// cout << min(p1, p2) << endl;
	return (min(p1, p2));
}
void solve() {
	int n, q;
	cin >> n >> q;
	vi arr(n), tree(4 * n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	build(arr, tree, 0, 0, n - 1);
	while (q--) {
		char ch;
		int l, r;
		cin >> ch >> l >> r;
		if (ch == 'q') {
			cout << query(tree, 0, 0, n - 1, l - 1, r - 1) << endl;
		}
		else {
			update(arr, tree, 0, 0, n - 1, l - 1, r);
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
	// fastio;
	solve();
	return 0;
}