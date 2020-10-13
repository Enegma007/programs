#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int n,c=0,max=0;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='x'){
			c++;
		}
		else{
			c=0;
		}
		if(c>2){
			max++;
		}
	}
	cout<<max;
	
	return 0;
}