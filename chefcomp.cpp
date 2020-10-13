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
// void initialize(vi &arr, vi &size, vi &ar, int &n) {
// 	for (int i = 0; i <= n; i++) {
// 		arr[i] = i;
// 		ar[i] = i;
// 		if (i == 0) {
// 			size[i] = 0;
// 		}
// 		else {
// 			size[i] = 1;
// 		}
// 	}
// }
// int root(vi &arr, int i) {
// 	while (arr[i] != i) {
// 		arr[i] = arr[arr[i]];
// 		i = arr[i];
// 	}
// 	return i;
// }
// bool finda(vi &arr, int u, int v) {
// 	if (root(arr, u) == root(arr, v)) {
// 		return true;
// 	}
// 	return false;
// }
// void uniona(vi &arr, vi &size, int &u, int &v) {
// 	int rootu = root(arr, u);
// 	int rootv = root(arr, v);
// 	if (size[rootu] < size[rootv]) {
// 		arr[rootu] = arr[rootv];
// 		size[rootv] += size[rootu];
// 	}
// 	else {
// 		arr[rootv] = arr[rootu];
// 		size[rootu] += size[rootv];
// 	}
// }
// void solve() {
// 	int n;
// 	cin >> n;
// 	vi arr(n + 1), size(n + 1), ar(n + 1), vis(n + 1, false);
// 	initialize(arr, size, ar, n);
// 	for (int i = 1; i <= n - 1; i++) {
// 		int u, v;
// 		cin >> u >> v;
// 		ar[v] = u;
// 		uniona(arr, size, u, v);
// 	}
// 	vi per(n + 1), a(n + 1), b(n + 1);
// 	for (int i = 1; i <= n; i++) {
// 		cin >> per[i];
// 	}
// 	for (int i = 1; i <= n; i++) {
// 		cin >> a[i];
// 	}
// 	for (int i = 1; i <= n; i++) {
// 		cin >> b[i];
// 	}
// 	vi d = b, ans(n + 1);
// 	for (int i = 1; i <= n; i++) {
// 		if (d[per[i]] > 0) {
// 			vis[per[i]] = true;
// 			d[per[i]] = d[per[i]] - min(a[per[i]], b[per[i]]);
// 			if (d[per[i]] <= 0) {
// 				d[per[i]] = 0;
// 				ans[per[i]] = i;
// 			}
// 			else {
// 				d[per[i]] = 0;
// 				ans[per[i]] = -1;
// 			}
// 			for (int j = 1; j <= n; j++) {
// 				if (!vis[j]) {
// 					if (arr[per[i]] == arr[j]) {
// 						d[j] = d[j] - min(a[per[i]], d[j]);
// 						if (d[j] <= 0) {
// 							d[j] = 0;
// 							ans[j] = i;
// 						}
// 						if (arr[j] == ar[j]) {
// 							arr[j] = j;
// 							ar[j] = j;
// 						}
// 						else {
// 							arr[j] = ar[j];
// 						}

// 					}
// 				}
// 			}
// 		}
// 		if (arr[per[i]] == ar[per[i]]) {
// 			arr[per[i]] = i;
// 			ar[per[i]] = i;
// 		}
// 		else {
// 			arr[per[i]] = ar[per[i]];
// 		}
// 	}
// 	for (int i = 1; i <= n; i++) {
// 		cout << ans[i] << space;
// 	}
// 	cout << endl;
// }
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