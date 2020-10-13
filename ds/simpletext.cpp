#include<bits/stdc++.h>
using namespace std;
#define ll long
int main(){
	ll q;
	string s="";
	string str;
	stack<string> st;
	cin>>q;
	while(q--){
		int t;
		cin>>t;
		switch(t){
			case 1:
				// string str;
				cin>>str;
				st.push(s);
				s=s+str;
				break;
			case 2:
				int k;
				cin>>k;
				st.push(s);
				s.erase(s.size()-k);
				break;
			case 3:
				int j;
				cin>>j;
				cout<<s[j-1]<<"\n";
				break;
			case 4:
				s=st.top();
				st.pop();
				break;

		}
	}
	return 0;

}