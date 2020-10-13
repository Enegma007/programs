#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define endl "\n"
bool check(vector<int> &v){
	unordered_set<int> s;
	for(int i=0;i<v.size();i++){
		s.insert(v[i]);
	}
	return(s.size()==v.size());
}
int main(){
	fastio
	int t;
	cin>>t;
	while(t--){
		int n,z,c=0,flag=1;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(!i){
				z=a;
				c++;
			}
			else{
				if(a==z){
					c++;
				}
				else{
					// c=1;
					v.push_back(c);
					c=1;
					z=a;

				}
			}
			// v.push_back(a);
		}
		if(check(v)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}