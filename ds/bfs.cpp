#include<bits/stdc++.h>
using namespace std;
class graph{
	public:
		int V;
		list<int> *adj;
		graph(int V){
			this->V=V;
			adj=new list<int>[V];
		}
		void addedge(int v,int w);
		void bfstraverse(int s);
		void dfstraverse(int s);
};		
void graph::addedge(int u,int v){
	adj[u].push_back(v);
}
void graph::bfstraverse(int s){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	queue<int> q;
	visited[s]=true;
	q.push(s);
	list<int>::iterator i;
	while(!q.empty()){
		s=q.front();
		cout<<s<<"->";
		q.pop();
		for(i=adj[s].begin();i!=adj[s].end();++i){
			if(!visited[*i]){
				visited[*i]=true;
				q.push(*i);
			}
		}
	}



}
void graph::dfstraverse(int s){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	stack<int> st;
	visited[s]=true;
	st.push(s);
	list<int>::iterator i;
	while(!st.empty()){
		s=st.top();
		cout<<s<<"->";
		st.pop();
		for(i=adj[s].begin();i!=adj[s].end();++i){
			if(!visited[*i]){
				visited[*i]=true;
				st.push(*i);
			}
		}
	}
}
int main(){
	graph *g=new graph(4);
	g->addedge(0,1);
	g->addedge(0,2);
	g->addedge(1,2);
	g->addedge(2,0);
	g->addedge(2,3);
	g->addedge(3,3);
	cout<<"2->"<<"\n";
	g->bfstraverse(2);
	cout<<"\n";
	g->dfstraverse(2);
	return 0;
}
