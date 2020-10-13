#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k,sum=0,sum1=0;
		cin>>n>>k;
		vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
			sum+=a;
			if(a>k){
				sum1+=k;
			}
			else{
				sum1+=a;
			}

		}
		int dif=abs(sum-sum1);
		cout<<dif<<"\n";
	}
	return 0;
}