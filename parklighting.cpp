#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long int m,n;
		cin>>n>>m;
		if(m*n%2==0){
			cout<<m*n/2<<"\n";

		}
		else{
			cout<<(m*n/2)+1<<"\n";
		}
	}
	return 0;
}