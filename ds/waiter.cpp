#include<bits/stdc++.h>
using namespace std;
int arr[1200];
void prime(){
	int count=1;
	for(int i=2;i<=10000;i++){
		if(i==2 || i==3){
			arr[count++]=i;
		}
		else{
			int flag=1;
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0){
					flag=0;
					break;
				}
			}
			if(flag){
				arr[count++]=i;
			}
		}
	}
}
int main(){
	prime();
	// for(int i=1;i<10;i++){
	// 	cout<<arr[i]<<"\n";
	// }
	int n,q;
	cin>>n>>q;
	int arr1[10000];
	int top1=-1;
	for(int i=0;i<n;i++){
		cin>>arr1[++top1];
	}
	// cout<<top1<<"\n";
	// for(int i=0;i<=top1;i++){
	// 	cout<<arr1[i];
	// }
	// cout<<"\n";
	int arr2[10000];
	int top2 =-1;
	int arr3[10000];
	int top3=-1;
	int arr4[10000];
	int top4=-1;
	for(int i=1;i<=q;i++){
		while(top1>=0){
			int temp=arr1[top1--];
			if(temp%arr[i]==0){
				arr2[++top2]=temp;
			}
			else{
				arr3[++top3]=temp;
			}
		}
		// for(int j=0;j<=top2;j++){
		// 	cout<<arr2[j];
		// }
		// cout<<"\n";
		// for(int j=0;j<=top3;j++){
		// 	cout<<arr3[j];
		// }
		// cout<<"\n";

		for(int j=top2;j>=0;j--){
			arr4[++top4]=arr2[j];
		}
		top2=-1;
		for(int j=0;j<=top3;j++){
			int temp=arr3[j];
			arr1[++top1]=temp;
		}
		top3=-1;

	}
	for(int i=0;i<=top4;i++){
		cout<<arr4[i]<<"\n";
	}
	for(int i=top1;i>=0;i--){
		cout<<arr1[i]<<"\n";
	}




	return 0;
}
