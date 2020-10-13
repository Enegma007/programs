#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,o;
	int flag=0;
	vector<int> v,v1;
	cin>>t;
	// iterator itr;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>o;
			v.push_back(o);
			if(o==1){
				v1.push_back(j);
			}
		}
		for(int j=0;j<v1.size()-1;j++){
			if(v1[j+1]-v1[j]>=6){
				flag=1;
			}
			else{
				flag=0;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

		
	}
	return 0;
	
}