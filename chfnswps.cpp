#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve(){
	ll n,ans=0;
	vector<int> x,y;
	map<int,int> p,q; 
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		x.push_back(a);
		if(p[a]){
			p[a]++;
		}
		else{
			p[a]=1;
		}
	}
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		y.push_back(a);
		if(q[a]){
			q[a]++;
		}
		else{
			q[a]=1;
		}
	}
	if(x==y){
		ans=0;
	}
	else{
		vector<in> v1,v2;
		
	}
	// for(const auto &a:p){
	// 	cout<<p.first<<" "<<p.second<<endl;
	// }
	// for(const auto &a:q){
	// 	cout<<q.first<<" "<<q.second<<endl;
	// }
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