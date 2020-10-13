#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s,s1,s2;
		int mid;
		cin>>s;
		mid=s.length()/2;
		s1=s.substr(0,mid);
		if(s.length()%2==0){
			s2=s.substr(mid,s.length());
		}
		else{
			s2=s.substr(mid+1,s.length());
		}
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		if(s1==s2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}
