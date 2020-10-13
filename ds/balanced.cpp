// (=40
// )=41
// []=91 and 93
// {}=123 and 125
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s; cin>>s;
		// char c;
		// int j;
		vector<int> v;
		bool flag=false;
		for(int i=0;i<s.length();i++){
			int j;
			char c;
			c=s[i];
			j=int(c);
			v.push_back(j);
		}
		for(int i=0;i<v.size()/2;i++){
			int j;
			if(v[i]==40 || v[i]==41){
				j=abs(v[i]-v[v.size()-1-i]);
				if(j==1){
					// cout<<"YES"<<"\n";
					flag=true;
				}
				else{
					// cout<<"NO"<<"\n";
					flag=false;
				}

			}
			else{
				j=abs(v[i]-v[v.size()-1-i]);
				if(j==2){
					// cout<<"YES"<<"\n";
					flag=true;
				}
				else{
					// cout<<"NO"<<"\n";
					flag=false;
				}
			}
		}
		if(flag){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
