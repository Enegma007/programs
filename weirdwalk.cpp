#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n,sum=0,sum1=0,sum2=0;
		vector<long int> v,v1;
		cin>>n;
		for(long int i=0;i<n;i++){
			long int a;
			cin>>a;
			v.push_back(a);
		}
		for(long int i=0;i<n;i++){
			long int a;
			cin>>a;
			v1.push_back(a);
		}
		for(long int i=0;i<n;i++){
			sum1+=v[i];
			sum2+=v1[i];
			if(v[i]==v1[i]){
				if(sum1==sum2){
					sum=sum+v1[i];
				}
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}