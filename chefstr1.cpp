#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve(){
	ll n,sum=0;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<n-1;i++){
		// sum+=abs(v[i+1]-v[i]);
		ll a=abs(v[i+1]-v[i]);
		a-=1;
		sum+=a;
		// cout<<sum<<"\n";
	}
	cout<<sum<<"\n";
}
int main(){
	fastio;
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;	
}