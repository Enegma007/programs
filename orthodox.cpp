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
void solve() {
	int n;
	cin >> n;
	vi arr(n);
	// vi ans(1000000, 0);
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		// ans[arr[i]]++;
		if (m[arr[i]]) {
			m[arr[i]]++;
		}
		else {
			m[arr[i]] = 1;
		}
	}
	// int flag = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int temp = arr[i] | arr[j];
			// cout << temp << endl;

			if (m[temp]) {
				// flag = 0;
				cout << "NO" << endl;
				return;
			}
			else {
				m[temp] = 1;
			}
		}
	}
	cout << "YES" << endl;
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
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// bool solve(vector<ll>& v){
//     set<ll> s;
//     ll x;
//     x = 1;
//     for(ll i=0 ;i<v.size() ;i++){
//         x = v[i];
//         if(s.find(x) != s.end()){
//             return false;
//         }
//         else{
//             s.insert(x);
//         }
//         for(ll j=i+1 ;j<v.size() ; j++){
//             x = (x|v[j]);
//             if(s.find(x) != s.end()){
//                 return false;
//             }
//             else{
//                 s.insert(x);
//             }
//         }
//     }

//     return true;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--){
//         ll n ;
//         cin >> n;
//         vector<ll> v;
//         for(ll i=0 ;i<n ;i++){
//             ll x;
//             cin >> x;
//             v.push_back(x);
//         }
//         bool check = solve(v);
//         if(check){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }