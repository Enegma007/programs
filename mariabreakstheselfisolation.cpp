#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long long int x1,x2,y1,y2,sum=0;;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2 && y1==y2){
			sum=1;
		}
		else{
			sum=(x2-x1)+(y2-y1);
		}
		cout<<sum<<"\n";
	}
	return 0;
}