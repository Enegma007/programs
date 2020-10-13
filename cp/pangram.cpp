#include<bits/stdc++.h>
using namespace std;
int main(){
	string e,s;
	getline(cin,s);
    int c=0;
    s[0]=tolower(s[0]);
    for(int i=97;i<=122;i++){
        for(int j=0;j<s.length();j++){
        	// cout<<char(i)<<"\t";
            if(int(s[j])==i){
            	cout<<char(i)<<"\t";
                c++;
                break;
            }
        }
    }
    cout<<c<<endl;
    if(c>=26){
        e="pangram";
        cout<<e;
    }
    else{
        e="not pangram";
        cout<<e;
    }
    return 0;

}