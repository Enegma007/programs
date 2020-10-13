#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> v,v1;
	cin>>n;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		v.push_back(d);
	}
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v.size();j++){
			if(i!=j){
				int a;
				a=abs(v[j]-v[i]);
				v1.push_back(a);

			}
		}
	}
	sort(v1.begin(),v1.end());
	cout<<v1[0]<<endl;
	return 0;
}