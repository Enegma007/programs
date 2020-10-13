#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;
int n, m, k;
vector<int> g[maxn];
bool mark[maxn];
void dfs(int v){
	mark[v] = 1;
	for(auto u : g[v])
		if(!mark[u])
			dfs(u);
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m >> k;
	for(int i = 0; i < m; i++){
		int v, u;
		cin >> v >> u;
		v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	int cnt = 0;
	for(int i = 0; i < n; i++)
		if(!mark[i]){
			cnt++;
			dfs(i);
		}
	cout << (cnt > k ? -1 : m - (n - k)) << '\n';
	return 0;
}
