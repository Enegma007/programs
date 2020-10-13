#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		vector<long long int> v;
		cin>>n;
		for(int i=0;i<n;i++){
		    long long int a;
			cin>>a;
			v.push_back(a);
		}
		long long int sum=v[0],min=v[0];
		for(int i=1;i<n;i++){
			if(v[i]<min){
				min=v[i];
				sum+=min;
			}
			else{
				sum+=min;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}