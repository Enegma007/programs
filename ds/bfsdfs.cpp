#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
void addedges(vector<int> g[],int &u,int &v){
	g[u].push_back(v);//adding edges between two vertices.

}
void bfs(vector<int> g[],int &a,int &s){
	bool *visited=new bool[a];
	for(int i=0;i<a;i++){
		visited[i]=false;
	}
	queue<int> d;
	d.push(s);
	visited[s]=true;
	while(!d.empty()){
		s=q.front();
		cout<<s<<"->";
		q.pop();
		for(const auto &b:g[s]){
			if(!visited[b]){
				visited[b]=true;
				d.push(b);
			}
		}
	}
	cout<<endl;
}
void dfs(vector<int> g[],int &a,int &s){
	bool *visited=new bool[a];
	for(int i=0;i<a;i++){
		visited[i]=false;
	}
	stack<int> st;
	st.push(s);
	visited[s]=true;
	while(!st.empty()){
		s=st.top();
		cout<<s<<"->";
		st.pop();
		for(const auto &b:g[s]){
			if(!visited[b]){
				visited[b]=true;
				st.push(b);
			}
		}
	}
}
int main(){
	int a;
	cin>>a;
	vector<int> g[a];
	return 0;
}