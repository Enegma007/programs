#include <iostream>
#include<vector>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> d;
    vector<int> v;
    int l=k/2;
    int max;
    for(int i=0;i<n-l;i++){
        for(int j=i;j<i+k;j++){
            v.push_back(arr[j]);

        }
        // v.shrink_to_fit();
        // vector<int>::iterator i;
        max=v[0];
        for(int k=1;k<v.size();k++){
            if(max<v[k]){
                max=v[k];
            }

        }
        // deque.push_front(max);
        if(d.empty()){
            d.push_front(max);
        }
        else{
            d.push_back(max);
        }
        v.clear();
    }
    for(deque<int>::iterator itr=d.begin();itr!=d.end();++itr){
        cout<<*itr<<" ";
    }
    cout<<"\n";
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}