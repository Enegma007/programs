#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
void push(stack<long int> &s,long int &d,stack<long int> &s1){
    s.push(d);
    if(s1.empty()){
        s1.push(d);
    }
    else{
        if(d>s1.top()){
            s1.push(d);
        }
    }


}
void pop(stack<long int> &s,stack<long int> &s1){
    if(s.top()==s1.top()){
        s1.pop();
    }
    s.pop();
}
void print(stack<long int> &s1){
    stack<long int> s2=s1;
    cout<<s2.top()<<"\n";
    

    
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);
    int a;
    stack<long int> s,s1;
    // s.push(-1);
    // print(s);
    cin>>a;
    while(a--){
        int b;
        long int c;
        cin>>b;
        switch(b){

            case 1:
                cin>>c;
                push(s,c,s1);
                break;
            case 2:
                pop(s,s1);
                break;
            case 3:
                print(s1);
                break;
        }

    }
    
    return 0;
}
