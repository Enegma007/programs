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
	int n, k = 0, sum = 0;
	cin >> n;
	vi arr(n), index, arr1(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	arr1 = arr;
	for (int i = 0; i < n; i++) {
		int l = arr[i];
		sum -= arr[i];
		arr.erase(arr.begin() + i);
		pair<int, int> max(arr[0], 0);
		for (int j = 0; j < arr.size(); j++) {
			if (arr[j] > max.first) {
				max.first = arr[j];
				max.second = j;
				// cout << max.first << endl;
			}
		}
		int sum1 = accumulate(arr.begin(), arr.end(), 0);
		arr.erase(arr.begin() + max.second);
		int sum2 = accumulate(arr.begin(), arr.end(), 0);
		if ((sum == sum1) && (sum2 == max.first)) {
			index.pb(i + 1);
			k++;
		}
		sum += l;
		arr = arr1;
	}
	// for (int i = 0; i < n; i++) {
	// 	// cout << sum << endl;
	// 	int l = arr[i];
	// 	sum -= arr[i];
	// 	arr.erase(arr.begin() + i);
	// 	// for (const auto a : arr) {
	// 	// 	cout << a << space;
	// 	// }
	// 	// cout << endl;
	// 	int sum1 = accumulate(arr.begin(), arr.end(), 0);
	// 	cout << sum1 << endl;
	// 	if (sum == sum1) {
	// 		index.pb(i + 1);
	// 		k++;
	// 	}
	// 	sum += l;
	// 	// arr.insert(arr.begin() + i, l);
	// 	arr = arr1;
	// }
	// // for (const auto a : arr) {
	// // 	cout << a << space;
	// // }
	// // cout << endl;
	cout << k << endl;
	for (const auto a : index) {
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
	solve();
	return 0;
}