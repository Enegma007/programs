#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		long long int x;
		cin>>x>>n>>m;
		for(int i=0;i<n&&x>=(x/2+10);i++){
			x=x/2+10;
		}
		for(int i=0;i<m;i++){
			x-=10;
		}
		if(x<=0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;

}