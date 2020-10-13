#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
ll check(vector<ll> &v,ll target){
	ll ans=0;
	auto it=find(v.begin(),v.end(),target);
	if(it!=v.end()){
		ans=target;
		v.erase(it);
		return ans;
	}
	else{
		ll l=0,r=v.size()-1;
		while(l<=r){
			ll m=l+(r-l)/2;
			if(target>v[m] && v[m]*2>target){
				ans=v[m];
				v.erase(v.begin()+m);
				break;
			}
			if(v[m]<target){
				l=m+1;
			}
			else{
				r=m-1;
			}
		}
	}
	return ans;
}
void solve(){
	ll n,x,x1,sum=0,k=0;
	cin>>n>>x;
	vector<ll> v;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	x1=v[n-1];
	if(x>=x1){
		k=v.size();
		sum+=k;
	}
	else{
		while(x){
			ll j=check(v,x);
			if(x<x1){
				if(j){
					x=j;
				}
				x=x*2;
			}
			else{
				k++;
				break;
			}
			k++;
		}
		sum=k+v.size();	
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