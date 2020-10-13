#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int c=0;
		for(int i=0;i<s.length()-1;i++){
			if(s[i]=='x'){
				if(s[i+1]=='y'){
					c++;
					i+=1;
				}

			}
			else{
				if(s[i+1]=='x'){
					c++;
					i+=1;
				}
				
			}
		}
		cout<<c<<"\n";

	}
	return 0;
}