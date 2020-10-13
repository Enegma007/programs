#include<iostream>
using namespace std;
int main(){
	int t;
	long n;
	cin>>t;
	while(t>0){
		cin>>n;
		cout<<(n-1)/2<<"\n";
		t--;
	}
	return 0;
}