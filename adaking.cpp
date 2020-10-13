#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
void solve(){
	char arr[8][8];
	int k,r,c;
	cin>>k;
	// arr[0][0]='O';
	k-=1;
	r=k/8;
	c=k%8;
	// cout<<r<<" "<<c<<"\n";
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			// if(i<=r && j<=c){
			// 	arr[i][j]='.';
			// }
			// if(i>=r && i<=r+1 && j>=c+1 && j<=c+1){
			// 	arr[i][j]='X';
			// }
			if(k<=7){
				if(i==r && j==c+1){
					arr[i][j]='X';
				}
				else if(i==r+1 && j<=c+1){
					arr[i][j]='X';
				}
				else{
					arr[i][j]='.';
				}
			}
			else{
				if(i==r && j>c){
					arr[i][j]='X';
				}
				else if(i==r+1 && j<=c+1){
					arr[i][j]='X';
				}
				else{
					arr[i][j]='.';
				}
			}
		}
	}
	arr[0][0]='O';
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout<<arr[i][j]<<"";
		}
		cout<<"\n";
	}
	cout<<"\n";
}
int main(){
	fastio;
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}