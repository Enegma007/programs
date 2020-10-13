#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,p=1;
		vector<int> v;
		cin>>n;
		while(n--){
			int k;
			cin>>k;
			v.push_back(k);

		}
		if(v.size()==1){
			cout<<p<<endl;
		}
		else{
			for(int i=0;i<v.size()-1;i++){
				if(v[i+1]<v[i]){
					p++;
				}
				else{
					v[i+1]=v[i];
				}
			}
			cout<<p<<endl;
		}


	}
	return 0;
}
