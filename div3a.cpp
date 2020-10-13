#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	long n,a,b,c;
	cin>>t;
	while(t>0){
		cin>>n;
		c=0;
		a=n-1;
		b=1;
		while(a>b){
			c++;
			a--;
			b++;
		}
		cout<<c<<"\n";
		t--;
	}

	return 0;
}