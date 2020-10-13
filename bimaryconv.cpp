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
string dectobin(int n) {
	string s = "";
	while (n > 0) {
		char c;
		if (n & 1) {
			c = '1';
			s += c;
		}
		else {
			c = '0';
			s += c;
		}
		n = n >> 1;
	}
	reverse(s.begin(), s.end());
	return s;

}
int bintodec(string s) {
	int base = 1;
	int decval = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == '1') {
			decval += base;
		}
		base = base * 2;
	}
	return decval;
}
int binconcat(int x, int y) {
	string binx = dectobin(x);
	string biny = dectobin(y);
	string binxbiny = binx + biny;
	string binybinx = biny + binx;
	int xplusy = bintodec(binxbiny);
	int yplusx = bintodec(binybinx);
	int ans = abs(xplusy - yplusx);
	return ans;
}
void solve() {
	int n;
	cin >> n;
	vi v(n), arr;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	// int maxe;
	int max = v[n - 1];
	// for (int i = 0; i < n; i++) {
	// 	for (int j = n - 1; j > 0; j--) {
	// 		if (v[i] == v[j]) {
	// 			// continue;
	// 			break;
	// 		}
	// 		int a = binconcat(v[i], v[j]);
	// 		int b = binconcat(v[j], v[i]);
	// 		arr.pb(a);
	// 		arr.pb(b);
	// 	}
	// int a = binconcat(v[i], v[j]);
	// arr.pb(a);
	// if (v[i] < v[j]) {
	// 	j++;
	// }
	// else {
	// 	i++;
	// }
	// }
	// for(int i=n-1;i>=0;i--){
	// 	for()
	// }
	// sort(arr.begin(), arr. end());
	// cout << arr[arr.size() - 1] << endl;
	cout << binconcat(v[0], v[n - 1]) << endl;
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