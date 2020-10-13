#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
ll solve(){
	int n;
	cin>>n;
	vector<ll> x,y;
	map<ll,ll> p,q;
	ll minx;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		x.push_back(a);
	}
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		y.push_back(a);
	}
	for(const auto a:x){
		p[a]+=1;
		minx=min(minx,a);
	}
	for(const auto a:y){
		q[a]+=1;
		minx=min(minx,a);
	}
	vector<ll> v;
	ll c=0,c1=0;
	for(auto i:p){
		if(q[i.first]==i.second){
			continue;
		}
		else if(abs(q[i.first]-p[i.first])%2==0 && p[i.first]>q[i.first]){
			while(q[i.first]!=p[i.first]){
				q[i.first]+=1;
				p[i.first]-=1;
				v.push_back(i.first);
				c+=1;
			}
		}
		else if(abs(q[i.first]-p[i.first])%2){
			return -1;
		}
	}
	for(auto i:q){
		if(p[i.first]==i.second){
			continue;
		}
		else if(abs(q[i.first]-p[i.first])%2==0 && q[i.first]>p[i.first]){
			while(p[i.first]!=q[i.first]){
				p[i.first]+=1;
				q[i.first]-=1;
				v.push_back(i.first);
				c1+=1;
			}
		}
		else{
			return -1;
		}
	}
	if(c1!=c){
		return -1;
	}
	sort(v.begin(),v.end());
	if(v.empty()){
		return 0;
	}

	ll s=0;
	for(ll i=0;i<c;i++){
		if(v[i]==minx){
			s+=minx;
		}
		else{
			s+=min((minx*2),v[i]);
		}
	}
	return s;
}
int main(){
	fastio;
	int t;
	cin>>t;
	while(t--){
		ll k=solve();
		cout<<k<<endl;
	}
	return 0;
}