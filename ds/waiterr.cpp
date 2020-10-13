#include<bits/stdc++.h>
using namespace std;
// int arr[1200];
vector<int> v;
void primes(){
	// int flaint g=1/
	// int count=0;
	cout<<"hello";
	int flag=1;
	for(int i=2;i<=10000;i++){
		if(i==2 || i==3){
			v.push_back(i);
			// arr[count++]=i;
		}
		else{
			// int	flag=1;
			for(int j=2;j<=i/2;i++){
				if(i%j==0){
					flag=0;
					break;
				}
			}
			if(flag){
			v.push_back(i);
				// arr[count++]=i;
			}

		}
		
	}

}
int main(){
	// cout<<"hello"<<"\n";
	primes();
	cout<<v[0];
	// for(auto &i:v){
	// 	cout<<i;
	// }
	// cout<<arr[0];
	int n,q,a;
	cin>>n>>q;
	vector<int> v1,v2,v3;
	for(int i=0;i<n;i++){
		cin>>a;
		v1.push_back(a);//33449
	}
	// cout<<v[0];
	reverse(v1.begin(),v1.end());//94433
	for(int i=0;i<q;i++){
		for(const auto &k:v1){
			if(k%v[i]==0){
				v2.push_back(k);//44
				// v1.erase(v1.begin());
			}
			else{
				v3.push_back(k);//933
				// v1.pop_front();
				// v1.erase(v1.begin());
			}
		}
		v1.clear();//
		// v2.reverse();
		reverse(v2.begin(),v2.end());//44
		// v3.reverse();
		reverse(v3.begin(),v3.end());//339
		for(const auto &k:v3){
			v1.push_back(k);//339
		}
		// v1.reverse();
		// reverse(v1.begin(),v1.end());
		v3.clear();

	}
	for(auto &i:v2){
		cout<<i<<"\n";
	}
	for(auto &i:v1){
		cout<<i<<"\n";
	}

	return 0;
}