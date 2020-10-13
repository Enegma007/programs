#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t,n,q;
	scanf("%ld",&t);
	while(t--){
		string s;
		// cin>>n>>q;
		scanf("%ld %ld",&n,&q);
		// fflush(stdin);
		cin>>s;
		while(q--){
			ll c;
			queue<char> que;
			cin>>c;
			for(auto &a:s){
				que.push(a);
			}	
			while(c--){
				// vector<char> v;
				string s1="";
				char ch;
				ll j=que.size();
				while(j--){
					ch=que.front();
					que.pop();
					int flag=1;
					if(!s1.length()){
						// v.push_back(ch);
						s1+=ch;
					}
					else{
						for(auto &a:s1){
							if(ch==a){
								flag=0;
								break;
							}
						}
					}
					if(flag){
						// v.push_back(ch);
						s1+=ch;
					}
					else{
						que.push(ch);
					}

				}
				if(que.empty()){
					break;
				}
			}
			// cout<<que.size()<<"\n";
			printf("%ld\n",que.size());
		}
	}
	return 0;
}