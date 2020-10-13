#include<bits/stdc++.h>
using namespace std;
void push(vector<int> &v,int a){
	v.push_back(a);
}
void print(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
	cout<<"\n";
}
int main(){
	vector<int> v;
	push(v,0);
	push(v,1);
	push(v,2);
	print(v);
	return 0;
}