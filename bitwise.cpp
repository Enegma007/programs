#include<iostream>
using namespace std;
#define intu unsigned long
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	intu t;
	long long mod=pow(2,62);
	// cout<<mod;
	cin>>t;
	while(t--){
		intu x,y,l,r;
		cin>>x>>y>>l>>r;
		intu sum=0,max,min,z;
		// for(int i=l;i<=r;i++){
		// 
		// }
		if(l==r){
			z=l;

		}
		if(r%2==0){
			z=r/2;
		}
		else{
			z=r/2;
		}
		// else if()
		for(int i=z;i<=r;i++){
			max=(x&i)*(y&i);
				// max=(x&i)*(y&i);
			if(sum>mod){
				sum%=mod;
			}
			if(sum==0){
				// sum=max;
				if(max){
					sum=max;
					min=i;
				}

			}
			else if(sum<max){
				if(max){
					sum=max;
					min=i;

				}

			}
			else if(sum==max){
				if(min>i){
					min=i;
				}
			}

		}
		cout<<min<<"\n";
	}
	
	return 0;
}