#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> grades,g;
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a;
		grades.push_back(a);
	}

	for(vector<int>::iterator i=grades.begin();i!=grades.end();++i){
		a=*i;
		// cout<<a;
		if(a>38){
			for(int j=a;j<a+5;j++){
			    b=j;
			    if(b%5==0){
				    if(b-a<3){
					    cout<<b<<"\n";
					    break;
					}
					else{
						cout<<a<<"\n";
						break;
					}
				
				}
			}
		}
		else{
			cout<<a<<"\n";
		}
		
	}
	return 0;
}
