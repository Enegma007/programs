#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
		int n,min,count=1,max;
		// cout<<t<<"\n";
		vector<int> v,v1;
		cin>>n;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<v.size()-1;i++){
			int d;
			// if(v[i]){
			d=v[i+1]-v[i];
			if(d<=2){
				count+=1;
			}
			else{
				v1.push_back(count);
				count=1;
			}
			// }
		}
		v1.push_back(count);
		sort(v1.begin(),v1.end());

		min=v1[0];
		max=v1[v1.size()-1];

		cout<<min<<" "<<max<<"\n";
		v.clear();
		v1.clear();
		

	}
	return 0;
}