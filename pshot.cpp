#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,sum=0,sum1=0;
		string s;
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++){
			if(i%2!=0){
				if(s[i]==1){
					sum++;
				}
			}
			else{
				if(s[i]==1){
					sum1++;
				}
				if(sum-sum1>=2 || sum1-sum>=2 || sum==sum1){
					cout<<i<<"\n";
				}
				break;
			}

		}
	}
	return 0;
}