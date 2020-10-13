#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,q;
		cin>>n>>q;
		vector<int> v,v1[n],v2;
		for(long long int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
		}
		for(long long int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			v1[u].push_back(v);
			v1[v].push_back(u);
		}
		for(long long int i=0;i<q;i++){
			int a,b;
			cin>>a>>b;
			// cout<<abs(v[a-1]-v[b-1])<<"\n";
			bool *visited=new bool[n];
			for(int i=0;i<n;i++){
				visited[i]=false;
			}
			queue<int> q;
			visited[a]=true;
			q.push(a);
			while(!q.empty()){
				a=q.front();
			// cout<<s<<"->";
				v2.push_back(a);
				q.pop();
				for(auto c:v1[a]){
					if(!visited[c]){
						visited[c]=true;
						q.push(c);
					}
				}
			}
		}
		for(int i=0;i<v2.size();i++){
			cout<<v2[i]<<"\n";
		}
	}
	return 0;
}