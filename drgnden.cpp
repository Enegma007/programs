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
	// cout<<"HELLO "<<t[s-1]<<endl;
}
ll queryt(vector<ll> &h,vector<ll> &t,ll &s,ll &d){
	// if(s==d){
	// 	return t[s-1];
	// }
	// else if(h[d-1]>=h[s-1]){
	// 	// cout<<h[s-1]<<" "<<h[d-1]<<endl;
	// 	return -1;
	// }
	// else{
	// 	ll sum=0,s1;
	// 	if(s>d){
	// 		for(ll i=s-1;i>=d-1;i--){
	// 		// sum+=t[i];
	// 			// cout<<h[i]<<endl;
	// 			if(h[i]>h[s-1] && h[i]>h[d-1]){
	// 				return -1;
	// 			}
	// 			if(i==s-1){
	// 				sum+=t[i];
	// 				s1=i;
	// 			}
	// 			if(h[s1]>h[i]){
	// 				sum+=t[i];
	// 				s1=i;
	// 			}
	// 			else{
	// 				sum-=t[s1];
	// 				sum+=t[i];
	// 				s1=i;
	// 			}
	// 		}
	// 	}
	// 	else{
	// 		for(ll i=s-1;i<=d-1;i++){
	// 			if(h[i]>h[s-1] && h[i]>h[d-1]){
	// 				return -1;
	// 			}
	// 			if(i==s-1){
	// 				sum+=t[i];
	// 				s1=i;
	// 			}
	// 			if(h[s1]>h[i]){
	// 				sum+=t[i];
	// 				s1=i;
	// 			}
	// 			else{
	// 				sum-=t[s1];
	// 				sum+=t[i];
	// 				s1=i;
	// 			}
	// 		}
	// 	}
	// 	return sum;
	// }
	s-=1;
	d-=1;
	ll pre=d;
	ll sum=t[d];
	if(s<d){
		for(ll i=d-1;i>s-1;i--){
			if(h[pre]<h[i]){
				pre=i;
				sum+=t[i];
			}

		}
		if(pre==s){
				return sum;
		}
		return -1;
	}
	else if(s>d){
		for(ll i=d+1;i<s+1;i++){
			if(h[pre]<h[i]){
				pre=i;
				sum+=t[i];
			}
		}
		if(pre==s){
			return sum;
		}
		return -1;
	}
	else{
		return t[d];
	}
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