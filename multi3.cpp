#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int k,d0,d1;
		cin>>k>>d0>>d1;
		long long int s=d0+d1;
		k=k-2;
		while(k){
			s+=s%10;
			k--;
			if(s%10==0){
				break;
			}
			else if(s%10==4){
				k%=12;
			}
		}
		if(s%3==0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}