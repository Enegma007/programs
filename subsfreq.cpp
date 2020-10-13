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
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
// unordered_map<int, int> ma;
// void freq(vi arr, int n) {
// 	unordered_map<int, int> m;
// 	for (const auto &a : arr) {
// 		if (m[a]) {
// 			m[a]++;
// 		}
// 		else {
// 			m[a] = 1;
// 		}
// 	}
// 	int x = arr[0], y = m[x];
// 	for (const auto &a : m) {
// 		if (a.s > y) {
// 			y = a.s;
// 			x = a.f;
// 		}
// 		else if (a.s == y) {
// 			x = min(a.f, x);
// 		}
// 	}
// 	if (ma[x]) {
// 		ma[x]++;
// 	}
// 	else {
// 		ma[x] = 1;
// 	}
// }
// void subs(vi &arr, int index, vi v) {
// 	if (index == arr.size()) {
// 		int l = v.size();
// 		if (l != 0) {
// 			freq(v, l);
// 		}
// 	}
// 	else {
// 		subs(arr, index + 1, v);
// 		v.pb(arr[index]);
// 		subs(arr, index + 1, v);
// 	}
// 	return;
// }
// void solve() {
// 	int n;
// 	cin >> n;
// 	vi arr(n);
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 		arr[i] = arr[i] % 1000000007;
// 	}
// 	vi v;
// 	subs(arr, 0, v);
// 	for (int i = 1; i <= n; i++) {
// 		cout << ma[i] << space;
// 		ma[i] = 0;
// 	}
// 	cout << endl;
// }
void count(int n, vi &arr, unordered_map<int, int> &m, unordered_map<int, int> &ma) {
	int k = n - 1;
	for (int i = 3; i <= k; i++) {

	}
}
void solve() {
	int n;
	cin >> n;
	vi arr(n + 1);
	unordered_map<int, int> m, ma;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % mod;
		if (m[arr[i]]) {
			m[arr[i]]++;
			ma[arr[i]]++;
		}
		else {
			m[arr[i]] = 1;
			ma[arr[i]] = 1;
		}
	}
	sort(arr.begin(), arr.end());
	if (n > 2) {
		for (int i = 1; i <= n; i++) {
			if ((n - i) == 0) {
				break;
			}
			if (m[arr[i]]) {
				m[arr[i]] = m[arr[i]] + (n - i) * 1;
			}
		}
	}
	int x = arr[1], y = ma[x];
	for (const auto &a : ma) {
		if (a.s > y) {
			y = a.s;
			x = a.f;
		}
		else if (a.s == y) {
			x = min(a.f, x);
			y = ma[x];
		}
	}
	m[x]++;
	if (n > 3) {
		count(n, arr, m, ma);
	}

	for (int i = 1; i <= n; i++) {
		cout << m[i] << space;
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
	w(t) {
		solve();
	}
	return 0;
}
// 3
// 2
// 2 3
// 2
// 2 3
// 2 2
// 2 2 3
// it is a combinatorial problem indeed.

// Let's say a smallest number appears k times in the original string.

// Appearing once in a subsequence, it wins it if every other number appears no more than once. That is, every other number has 2 options - to appear or not to appear. This is the reason behind the powers of two.

// Appearing twice in a subsequence, it wins it if every other number appears no more than twice. That is, every other number now has 3 options - to appear twice, once, or not appear at all. See how powers of tree now come playing? (Of course, some of them may not have all three options).

// Keep going. Count options for larger numbers, multiply them, and add to the tally.

// The same logic applies to other numbers - just watch out how to account for the numbers smaller than the one you are currently interested in.
