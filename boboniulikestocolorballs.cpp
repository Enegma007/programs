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
#define mod 10e9
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
bool check(int r, int g, int b, int w) {
	if (r % 2 + g % 2 + b % 2 + w % 2 > 1) {
		return false;
	}
	else {
		return true;
	}
}
void solve() {
	int r, g, b, w;
	cin >> r >> g >> b >> w;
	if (check(r, g, b, w)) {
		cout << "Yes" << endl;
	}
	else {
		if (r > 0 && b > 0 && g > 0 && check(r - 1, g - 1, b - 1, w + 1)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
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