#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=0;i<n;i++){
			arr[i][i]=((i+1)*(i+1))-i;
			int a,b;
			if(i%2==0){
				a=arr[i][i]-i;
				b=arr[i][i]+i;
			}
			else{
				a=arr[i][i]+i;
				b=arr[i][i]-i;
			}
			for(int j=0;j<i;j++){
				arr[i][j]=a;
				arr[j][i]=b;
				if(i%2==0){
					a++;
					b--;
				}
				else{
					a--;
					b++;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}