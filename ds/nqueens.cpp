#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
bool isattacked(int x,int y,int n,int arr[][]){
	for(int i=0;i<n;i++){
		if(arr[x][i]==1){
			return true;
		}
	}

	for(int i=0;i<n;i++){
		if(arr[i][y]==1){
			return true;
		}
	}
	for(int i=0;i<n;i++){{
		for(int j=0;j<n;j++){
			if(i+j==x+y){
				if(i+j==1){
					return true;
				}
			}
			if(mod(i-j)==mod(x-y)){
				if(mod(i-j)==1){
					return true;
				}
			}

		}
	}
	return false;

	
}
bool nqueen(int arr[][],int n){
	if(!n){
		return true;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(issattacked(i,j,n,arr)){
				continue;
			}
			arr[i][j]=1;
			if(nqueen(arr,n-1)){
				return true;
			}
			arr[i][j]=0;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	if(nqueen(arr,n)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}