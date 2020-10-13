#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	long int n,q,f,d;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>n>>q;
		// fflush(stdin);
		if(n!=q){
			long int i=0,count=0,c=0;
			for(int b=0;b<q;b++){
				cin>>f>>d;
				if(count==0){
					c=d;
					count=count+abs(c);
				}
				else{
					c=abs(i-f)+abs(d-f);
					count=count+abs(c);
				}
				i=d;
			}
			count=count%100000;
			cout<<count<<"\n";
		}
		
	}
	return 0;
}