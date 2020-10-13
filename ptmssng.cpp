#include<bits/stdc++.h>
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve(){
	ll n;
	cin>>n;
	n=4*n-1;
	map<ll,ll> x,y;
	ll a,b;
	while(n--){
		ll x1,y1;
		cin>>x1>>y1;
		if(x.empty() && y.empty()){
			x.insert(pair<ll,ll>(x1,1));
			y.insert(pair<ll,ll>(y1,1));
		}
		else{
			if(x.find(x1)!=x.end()){
				x[x1]+=1;
			}
			else{
				x.insert(pair<ll,ll>(x1,1));
			}
			if(y.find(y1)!=y.end()){
				// y->second=1;
				y[y1]+=1;
			}
			else{
				y.insert(pair<ll,ll>(y1,1));
			}
		}

	}
	for(const auto &i:x){
		if(i.second%2!=0){
			a=i.first;
			break;
		}
	}
	for(const auto &i:y){
		if(i.second%2!=0){
			b=i.first;
			break;
		}
	}
	cout<<a<<" "<<b<<"\n";
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