#include<bits/stdc++.h>
using namespace std;
// int min(vector<int> &v){
// 	int min=v[0];
// 	for(int i=0;i<v.size();i++){
// 		if(min>v[i]){
// 			min=v[i];
// 		}
// 	}
// 	return min;
// }
// int max(vector<int> &v){
// 	int max=v[0];
// 	for(int i=0;i<v.size();i++){
// 		if(max<v[i]){
// 			max=v[i];
// 		}
// 	}
// 	return max;
// }
// bool search(int &d,vector<int> &v){
// 	for(int i=0;i<n;i++){

// 	}

// }
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	int sum=0,d,mi,ma;
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		sum=sum+c;
		if(i==0){
			mi=c;
			ma=c;
		}
		else{
			if(c<mi){
				mi=c;
			}
			else{
				ma=c;
			}
		}
		v.push_back(c);
	}
	// mi=min(v);
	// ma=max(v);

	d=k-sum;
	// cout<<d<<mi<<ma<<"\n";
	if(d==0){
		cout<<"YES"<<"\n";

	}
	else if(d>=mi && d<=ma){
		cout<<"YES"<<"\n";

	}
	else{
		cout<<"NO"<<"\n";
	}
	return 0;

}