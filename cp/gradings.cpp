#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> g,h;
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		g.push_back(a);

	}
	for(vector<int>::iterator i=g.begin();i!=g.end();++i){
		a=*i;
		if(a>=38){
			for(int j=a;j<a+5;j++){
				
				if(j%5==0){
					b=j;
					break;
				}
				
			}
			if(b-a<3){
				h.push_back(b);

			}
			else{
				h.push_back(a);
			}

		}
		else{
			h.push_back(a);
		}
	}
	for(vector<int>::iterator i=h.begin();i!=h.end();++i){
		cout<<*i<<"\n";
	}
	return 0;
}