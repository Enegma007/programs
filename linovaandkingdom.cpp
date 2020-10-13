#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	long long int n,k,n1;
	cin>>n>>k;
	n1=n-1;
	list<int> *l=new list<int>[n];
	while(n1--){
		int u,v;
		cin>>u>>v;
		l[u].push_back(v);
		l[v].push_back(u);
	}

	return 0;
}