#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long int n,x,c=0,sum=0;
		cin>>n>>x;
		long int arr[n];
		for(long int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		// for(int i=0;i<n;i++){
		// 	cout<<arr[i]<<" ";
		// }
		// cout<<"\n";
		for(const auto &a:arr){
			sum+=a;
			if(sum>x){
				break;
			}
			c++;
		}
		cout<<c<<"\n";
	}
	return 0;
}