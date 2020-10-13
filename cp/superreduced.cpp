#include<bits/stdc++.h>
using namespace std;
void reduced(string s){
	char c;
    int n;
    string q[s.length()];
    // vector<char> v;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            n=int(s[i])+2;
            c=char(n);
            q[i]=c;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            n=int(s[i])+2;
            c=char(n);
            q[i]=c;
        }
        else if(s[i]='-'){
            q[i]=c;
        }
    }
    // for(int i=0;i<v.size();i++){
    // 	cout<<v[i]; 
    // }
    // cout<<"\n";
    // for(int i=0;i<v.size())
    return q;

}

int main(){
	string s;
	// int k;
	getline(cin,s);
	// int k;
	// cin>>k;
	// string result = reduced(s);
	// cout<<result<<"\n";
	return 0;

}