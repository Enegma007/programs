#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> g[], int u, int v) {
	g[u].push_back(v);
	// g[v].push_back(u);
}
void print(vector<int> g[], int &V) {
	for (int i = 0; i < V; i++) {
		cout << i << " Adjancency LIst" << endl;
		for (auto &a : g[i]) {
			cout << a << "->";
		}
		cout << "\n";
	}
}
void bfs(vector<int> g[], int V, int s) {
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while (!q.empty()) {
		s = q.front();
		cout << s << "->";
		q.pop();
		for (auto a : g[s]) {
			if (!visited[a]) {
				visited[a] = true;
				q.push(a);
			}
		}
	}
}
void dfs(vector<int> g[], int V, int s) {
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
	stack<int> st;
	st.push(s);
	visited[s] = true;
	while (!st.empty()) {
		s = st.top();
		cout << s << "->";
		st.pop();
		for (auto a : g[s]) {
			if (!visited[a]) {
				visited[a] = true;
				st.push(a);
			}
		}
	}
}
void dfsi()

int main() {
	int V = 5;
	// cin>>V;
	vector<int> g[V];
	addedge(g, 0, 1);
	addedge(g, 0, 2);
	addedge(g, 1, 2);
	addedge(g, 2, 0);
	// addedge(g,1,4);
	addedge(g, 2, 3);
	addedge(g, 3, 3);
	print(g, V);
	bfs(g, V, 2);
	dfs(g, V, 2);
	return 0;
}