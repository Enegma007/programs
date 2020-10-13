#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			long long int n;
			int i,q;
			cin>>i>>n>>q;
			if(n%2!=0){
				if(i==q){
					cout<<(n/2)<<"\n";
				}
				else{
					cout<<(n/2)+1<<"\n";
				}
			}
			else{
				cout<<(n/2)<<"\n";
			}
		}
	}
	return 0;
}