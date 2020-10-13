#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<char> v;
		vector<int> v1;
		string a,b;
		cin>>a;
		cin>>b;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				v.push_back(b[i]);
				v1.push_back(i);
			}
		}
		
	}

	return 0;
}