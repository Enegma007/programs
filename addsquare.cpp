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
#define endl "\n"
#define mod 1e9+7
#define all(v) (v).begin(),(v).end()
#define gcd(a,b) __gcd(a,b)
#define size(v)   ((int)(v.size()))
#define mem(a,val)   memset(&a,val,sizeof(a))
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int power(int x, int y, int a)
{
	int r = 1; // Initialize result

	x = x % a; // Update x if it is more than or
	// equal to p

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			r = (r * x) % a;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % a;
	}
	return r;
}
void solve() {
	int w, h, n, m;
	cin >> w >> h >> n >> m;
	vi x(n), y(m);
	rep(i, 0, n - 1) {
		cin >> x[i];
	}
	rep(i, 0, m - 1) {
		cin >> y[i];
	}
	int cnt = 0, ans = INT_MIN, k = 0;
	unordered_map<int, int> a;
	rep(i, 0, n - 2) {
		rep(j, i + 1, n - 1) {
			int l = a[j] - a[i];
			a[l] += 1;
		}
	}
	rep(i, 0, h) {
		if (y[k] == i) {
			cnt++;
			k++;
			continue;
		}
		y.insert(y.begin() + cnt, i);
		unordered_map<int, int> b, v;
		rep(q, 0, m - 1) {
			rep(e, q + 1, m) {
				b[y[e] - y[q]] += 1;
			}
		}
		int r = 0;
		for (const auto &c : a) {
			if (b.find(c.f) != b.end())
				// r++;
				v[c.f]++;
		}
		ans = max(ans, size(v));
		y.erase(y.begin() + cnt);
		cout << ans << space << r << endl;
	}
	cout << ans << space;
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
	// while (t--) {
	// 	solve();
	// }
	solve();
	return 0;
}
// https://dzone.com/articles/how-to-build-a-crud-application-using-react-and-dj
// https://www.digitalocean.com/community/tutorials/build-a-to-do-application-using-django-and-react