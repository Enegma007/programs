#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		vector<int> v(n),v1,v2;
		for(int i=0;i<n;i++){
			// int a;
			// cin>>a;
			// v.push_back(a);
			cin>>v[i];
		}
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a){
				v2.push_back(v[i]);
			}
			else{
				v1.push_back(v[i]);
			}
		}
		s=100-s;
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		if(v1[0]+v2[0]<=s){
			cout<<"yes"<<"\n";
		}
		else{
			cout<<"no"<<"\n";
		}
	}
	return 0;
}
