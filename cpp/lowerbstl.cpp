#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,num,q,y;
    vector<int> v; 
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>num;
        v.push_back(num);
    } 
    cin>>q;
    for(int j=0;j<q;j++){
        cin>>y;
        vector<int>::iterator i=lower_bound(v.begin(),v.end(),y);
        if(binary_search(v.begin(),v.end(),y)){
            cout<<"Yes "<<distance(v.begin(),i)+1<<endl;
        }
        else{
            cout<<"No "<<distance(v.begin(),i)+1<<endl;
        }
        
    }


    return 0;
}
