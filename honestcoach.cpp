#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		// for(int i=0;i<n;i++){
		// 	cout<<v[i];
		// }
		// cout<<"\n";
		int b=0,c;
		for(int i=0;i<n-1;i++){
			// int a=v[i+1]-v[i];
			if(b==0){
				b=v[i+1]-v[i];
			}
			else{
				c=v[i+1]-v[i];
				b=min(b,c);
				// cout<<b;
				if(b==0){
					break;
				}
			}
		}
		cout<<b<<endl;
	}
	return 0;
}