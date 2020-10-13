#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q,n,k;
    string s;
    map<string,int>m;

    cin>>q;
    for(int i=0;i<q;i++){
        cin>>n>>s;
        switch(n){
            case 1:
                cin>>k;
                m[s]+=k;
                break;
            case 2:
                m.erase(s);
                break;
            case 3:
                if(m.find(s)!=m.end()){
                    cout<<m[s]<<endl;
                }
                else{
                    cout<<"0"<<endl;
                }
                break;


        }
    }
    return 0;
}



