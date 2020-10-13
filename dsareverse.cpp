#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	long int n;
	cin>>t;
	while(t--){
		int a,count=0;
		long int sum=0,n1;
		cin>>n;
		n1=n;
		while(n1>0){
			a=n1%10;
			count++;
			n1=n1/10;

		}
		// cout<<count<<endl;
		while(count){
			a=n%10;
			count--;
			sum+=a*pow(10,count);
			// count--;

			n=n/10;
			// count--;

		}
		cout<<sum<<endl;

	}
	return 0;
}
