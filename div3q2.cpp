#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		int a=0,b=0,c=0;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			if(i<n/2){
				a=a+2;
				v.push_back(a);
			}
			else{
				if(i==n-1){
					for(int j=a+1;j<2*a;j+=2){
						c=b;
						c=c+j;
						if(a==c){
							v.push_back(j);
							cout<<"YES"<<"\n";
							for(long int k=0;k<v.size();k++){
								cout<<v[k]<<"\t";
							}
							cout<<"\n";
							break;
						}
						// else{
						// 	cout<<"NO"<<"\n";
						// }
					}
				}
				if(b==0){
					b=1;
					v.push_back(b);

				}
				else{
					b=b+2;
					v.push_back(b);
				}
			}
		}
		// v.clear();
		for(int i=0;i<v.size();i++){
			cout<<v[i];
		}

	}
	return 0;
}