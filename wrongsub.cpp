#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	long long int n;
	int k;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		int a;
		a=n%10;
		if(a==0){
			n=n/10;
		}
		else{
			n-=1;
		}

	}
	cout<<n;
	return 0;

}