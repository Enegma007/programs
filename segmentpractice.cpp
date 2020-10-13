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
void build(int node, int start, int end, int tree[], int arr[]) {
	if (start == end) {
		tree[node] = arr[start];
	}
	else {
		int mid = (start + end) / 2;
		build(2 * node + 1, start, mid, tree, arr);
		build(2 * node + 2, mid + 1, end, tree, arr);
		tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
		cout << "min" << space << node << space << tree[node] << endl;
	}
}
void update(int node, int start, int end, int idx, int val, int tree[], int arr[]) {
	if (start == end) {
		arr[idx] = val;
		tree[node] = val;
	}
	else {
		int mid = (start + end) / 2;
		if (idx >= start && idx <= mid) {
			update(2 * node + 1, start, mid, idx, val, tree, arr);
		}
		else {
			update(2 * node + 2, mid + 1, end, idx, val, tree, arr);
		}
		tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
	}
}
int query(int node, int start, int end, int l, int r, int tree[]) {
	if (l > end || r < start) {
		return 0;
	}
	if (l <= start && r >= end) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	int p1 = query(2 * node + 1, start, mid, l, r, tree);
	int p2 = query(2 * node + 2, mid + 1, end, l, r, tree);
	return min(p1, p2);
}
void solve() {
	int n, q;
	cin >> n >> q;
	n--;
	int arr[n], tree[2 * n];
	for (int i = 0; i <= n; i++) {
		cin >> arr[i];
	}
	build(0, 0, n, tree, arr);
	while (q--) {
		char b;
		int l, r;
		cin >> b >> l >> r;
		l--;
		b--;
		if (b == 'q') {
			int c = query(0, 0, n , l, r, tree);
			cout << c << endl;
		}
		else {
			update(0, 0, n , l, r, tree, arr);
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << tree[i] << space;
	}
	// return 0;
}
int32_t main() {
#ifndef ONLINE_JUDGE
	//read input into input.txt
	freopen("input.txt", "r", stdin);
	//write output into output.txt
	freopen("output.txt", "w", stdout);
#endif
	fastio;
	// w(t) {
	// 	solve();
	// }
	solve();
	return 0;
}