#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string s,r;
		char z;
		long int k=0,l=0,g,h;
		cin>>s;
		cin>>r;
		for(int a=0;a<s.length();a++){
			if(s[a]==r[a]){
				continue;
			}
			else{
				z=s[a];
				s[a]=r[a];
				r[a]=s[a];
				k++;

			}

		}
		l=k;
		cout<<l*k<<"\n";

	}
	return 0;
}