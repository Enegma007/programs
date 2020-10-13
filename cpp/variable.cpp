#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q,k,o;
	vector<vector<int> > a;
	cin>>n>>q;
	for(int i=0;i<n;++i){
		cin>>k;
		for(int j=0;j<k;++j){
			cin>>o;
			a[i].push_back(o);
		}				
	}
	int r,s;
	for(int z=1;z<=q;z++){
		cin>>r>>s;
		cout<<a[r][s]<<endl;
	}
	return 0;
}