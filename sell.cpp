#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,o,a;
	long long profit=0;
	vector<int> v;
	cin>>t;
	for(int j=0;j<t;j++){
		profit=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>o;
			v.push_back(o);
			if(o>0){
				if(profit==0){
					profit=profit+o;
				}
				else{
					o=o-i;
					profit=profit+o;
				}
			}
		}
		
		// profit=v[0]+profit
		v.clear();
		cout<<profit<<"\n";



	}
	return 0;

}