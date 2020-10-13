#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int five=0,ten=0,flag=0;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);

		}
		for(int i=0;i<v.size();i++){
			int a=v[i];
			if(a==5){
				five++;
				// flag=1;
			}
			else if(a==10){
				ten++;
				if(five>=1){
					five--;
					flag=1;
				}
				else{
					flag=0;
					break;
				}

			}
			else{
				if(ten>=1){
					ten--;
					flag=1;
				}
				else if(five>=2){
					five=five-2;
					flag=1;
				}
				else{
					flag=0;
					break;
				}
			}
		}
		if(flag){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}