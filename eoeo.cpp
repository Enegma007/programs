#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long long int ts,js;
		cin>>ts;
		// vector<long long int> v;
		// for(long long int i=1;i<=ts;i++){

		// }
		if(ts%2==0){
			while(ts%2==0){
				ts=ts/2;
			}
			js=ts/2;

		}
		else{
			js=ts/2;
		}
		cout<<js<<"\n";
	}
	return 0;
}