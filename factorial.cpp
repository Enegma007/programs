#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long int n,sum=0;
		cin>>n;
		if(n<5){
			cout<<0<<endl;
		}
		else{
			while(n!=0){
				n/=5;
				sum+=n;
			}
			cout<<sum<<endl;
		}
		
	}
	return 0;

}