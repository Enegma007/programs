#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		unsigned long int n,c;
		cin>>n;
		if(n>=3){
			if(n%3==0){
				c=n/3;
				cout<<c%1000000000<<"\n";
			}
			else{
				c=n/7;
				cout<<c%1000000000<<"\n";
			}


		}


	}

	return 0;
}