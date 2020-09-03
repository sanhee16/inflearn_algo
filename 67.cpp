#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
#define max 21
/*
5 8
1 2 12
1 3 6
1 4 10
2 3 2
2 5 2
3 4 3
4 2 2
4 5 5
*/
vector<int> vis;
vector<vector<int> > g;
int n,m,res=1e9;
void dfs(int v, int sum){
	if(v==n){
		if(res > sum)
			res = sum;
		return ;
	}
	for(int i=1; i<=n; i++){
		if(vis[i]==0 && g[v][i] > 0){
			vis[i]=1;
			dfs(i,sum+g[v][i]);
			vis[i]=0;
		}
	}
}
int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		vis.push_back(0);
	for(int i=0; i<n; i++)
		g.push_back(vis);
		
	int a,b,w;
	for(int i=0;i<m;i++){
		cin >> a >> b >> w;
		g[a][b] = w;
	}
	vis[1] = 1;
	dfs(1,0);
	
	cout << res;
	return 0;
}
