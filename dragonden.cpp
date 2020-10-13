#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
vector<ll> nge(vector<ll> &h){
	stack<ll> s;
	vector<ll> nexth;
	for(ll i=h.size()-1;i>=0;i++){
		while(!s.empty() && s.top()<=h[i]){
			s.pop();
		}
		if(s.empty()){
			nexth[i]=-1;
		}
		else{
			nexth[i]=s.top();
		}
		s.push(h[i]);
	}
	return nexth;
}
void queryo(vector<ll> &t,ll &s,ll &v){
	t[s-1]=v;
}
ll queryt(vector<ll> &h,vector<ll> &t,ll &s,ll &d){
	s-=1;
	d-=1;
	if(s>d){
		ll temp=s;
		s=d;
		d=temp;
	}
	vector<ll> nextheight=nge(h);
	if(h[s])
}
void solve(){
	ll n,q;
	cin>>n>>q;
	vector<ll> h,t;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		h.push_back(a);
	}
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		t.push_back(a);
	}
	while(q--){
		ll m,n,o;
		cin>>m>>n>>o;
		if(m==1){
			queryo(t,n,o);
		}
		else{
			ll ans=queryt(h,t,n,o);
			cout<<ans<<endl;
		}
	}

}
int main(){
	fastio;
	solve();
	return 0;
}