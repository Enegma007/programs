#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<3;i++){
		for(int j=i;j<i+2;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}