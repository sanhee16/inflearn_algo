#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
/*
5 9
1 2
1 3
1 4
2 1
2 3
2 5
3 4
4 2
4 5
*/
#define max 21

vector<int> g[max];
int n, m, cnt=0;
void dfs(int v, vector<int> vis){
	for(int i=0; i<g[v].size(); i++){
		int u = g[v][i];
		if(u==n)
			cnt++;
		else if(vis[u]==0){
			vector<int> tmp_vis = vis;
			tmp_vis[u]=1;
			dfs(u,tmp_vis);
		}
	}
}
int main(){
	vector<int> vis;
	cin >> n >> m;
	int a,b;
	for(int i=0; i<=n; i++)
		vis.push_back(0);
	for(int i=0; i<m; i++){
		cin >> a >> b;
		g[a].push_back(b);
	}
	vis[1] = 1;
	dfs(1,vis);
	
	cout << cnt;
	return 0;
}
