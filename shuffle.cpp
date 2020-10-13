#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		int flag=0;
		vector<int> v,v1;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
			v1.push_back(a);
		}
		sort(v1.begin(),v1.end());
		for(int i=0;i<v.size()-k;i++){
			if(v[i]>v[i+k]){
				int temp;
				temp=v[i];
				v[i]=v[i+k];
				v[i+k]=temp;
			}
		}
		// for(int i=0;i<v.size();i++){
		// 	cout<<v[i];
		// }
		// cout<<endl;
		// for(int i=0;i<v.size();i++){
		// 	cout<<v1[i];
		// }
		// cout<<endl;
		for(int i=0;i<v.size();i++){
			if(v[i]!=v1[i]){
				flag=1;
				break;
			}
		}
		if(flag){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}