#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string b;
		cin>>b;
		if(b.length()<=2){
			cout<<b<<"\n";
		}
		else{
			string s="";
			s+=b[0];
			// char c;
			for(int i=1;i<b.size();i++){
				if(i%2==0){
					continue;
				}
				else{
					char c=b[i];
					s+=c;
				}
			}
			cout<<s<<"\n";

		}
	}
	return 0;
}