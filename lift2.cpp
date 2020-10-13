#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	     unsigned long int sum=0;
	    long int m=0;
	    while(q--){
	        long int i,j;
	        cin>>i>>j;
	        cout<<m<<endl;
	        cout<<"abs(i-m)"<<abs(i-m)<<endl;
	        cout<<"abs(i-j)"<<abs(i-j)<<endl;
	        
	        sum=sum+abs(i-m)+abs(i-j);
	        cout<<"sum:"<<sum<<endl;
	        
	        m=j;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}