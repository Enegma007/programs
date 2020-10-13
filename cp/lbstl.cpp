#include <iostream>  
#include<iterator>  
#include<vector> 
#include<algorithm> 
using namespace std;  
int main()  
{  
   vector<int> v;
   int n,j;
   cin>>n;
   for(int i=0;i<5;i++){
   		cin>>j;
   		v.push_back(j);
   }  
   vector<int>::iterator itr;  
   // itr=v.begin();
   itr = lower_bound(v.begin(),v.end(),n);
   cout<<"\n"<<*itr<<"\n";
   cout<<itr-v.begin();
   
   return 0;  
}