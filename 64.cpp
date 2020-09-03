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
int n,m;
vector<vector<int> > v;
vector<int> tmp;
int cnt = 0;
void dfs(int vertex, vector<int> vis){
	if(vertex==n){
		cnt++;
	}else{
		for(int i=2;i<n+1;i++){
			if(vis[i]==0 && v[vertex][i]==1){
				vis[i]=1;
				dfs(i,vis);
				vis[i]=0;
			}
		}
	}
	return ;
}
int main(){
	cin >> n >> m;
	vector<int> vis;
	for(int i=0;i<n+1;i++){
		tmp.push_back(0);
		vis.push_back(0);
	}
	for(int i=0;i<n+1;i++){
		v.push_back(tmp);
	}
	for(int i=0;i<m;i++){
		int v1 , v2;
		cin >> v1 >> v2;
		v[v1][v2] = 1;
	}
	
	vis[1]=1;
	dfs(1,vis);
	
	cout << cnt;
	return 0;	
}
