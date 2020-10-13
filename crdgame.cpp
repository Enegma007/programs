#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
ll calsum(ll &a){
	ll sum=0;
	while(a){
		ll c;
		c=a%10;
		sum+=c;
		a/=10;
	}
	return sum;
}
void solve(){
	int n;
	cin>>n;
	int cwin=0,mwin=0,win;
	while(n--){
		ll a,b,chef,monty;
		cin>>a>>b;
		chef=calsum(a);
		monty=calsum(b);
		// cout<<chef<<" "<<monty<<"\n";
		if(chef==monty){
			// win=0;
			cwin++;
			mwin++;
		}
		else if(chef>monty){
			// win=1;
			// mwin++;
			cwin++;
		}
		else{
			mwin++;
		}
	}
	if(cwin==mwin){
		win=2;
	}
	else if(cwin>mwin){
		win=0;
	}
	else{
		win=1;
	}
	if(win==1){
		cout<<win<<" "<<mwin<<"\n";
	}
	else if(win==2){
		cout<<win<<" "<<mwin<<"\n";
	}
	else{
		cout<<win<<" "<<cwin<<"\n";
	}
	
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
//2
// 3
// 10 4
// 8 12
// 7 6
// 2
// 5 10
// 3 4