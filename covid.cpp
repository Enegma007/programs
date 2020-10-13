#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,o;
	int flag=0;
	vector<int> v1;
	cin>>t;
	// iterator itr;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>o;
			// v.push_back(o);
			if(o==1){
				v1.push_back(j+1);
			}
		}
		// for(int j=0;j<v1.size();j++){
		// 	cout<<v1[j]<<"\t";
		// }
		if(v1.size()<=1){
			flag=1;
		}
		else{
			for(int j=0;j<v1.size()-1;j++){
				if(v1[j+1]-v1[j]>=6){
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
		v1.clear();

		
	}
	return 0;
	
}