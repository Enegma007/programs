#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,v,p,max=0,profit;
		cin>>n;
		while(n--){
			cin>>s>>p>>v;
			p=p/(s+1);
			profit=p*v;
			if(profit>max){
				max=profit;
			}
		}
		cout<<max<<endl;
	}

	return 0;
}