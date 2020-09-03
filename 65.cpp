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
0 0 0 0 0 0 0
0 1 1 0 1 1 0
0 0 0 0 0 0 0
1 1 0 0 1 1 1
1 1 1 0 0 0 1
1 1 1 0 1 0 0
1 0 1 0 0 0 0
*/
vector<vector<int> > g;
vector<int> t1;
vector<int> t2;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int cnt = 0;
void dfs(int a, int b, vector<vector<int> > vis){
	for(int i=0;i<4;i++){
		int x = dx[i] + a;
		int y = dy[i] + b;
		if(x==7 && y==7){
			cnt++;
			continue;
		}
		if(vis[x][y]==0 && g[x][y]==0){
			vis[x][y]=1;
			dfs(x,y,vis);
			vis[x][y]=0;
		}
	}
	return ;
}
int main(){
	vector<vector<int> > vis;
	for(int i=0;i<9;i++){
		t1.push_back(0);
		t2.push_back(1);
	}
	for(int i=0;i<9;i++){
		vis.push_back(t1);
		g.push_back(t2);
	}
	
	for(int i=1;i<8;i++)
		for(int j=1;j<8;j++)
			cin >> g[i][j];
			
	vis[1][1] = 1;
	vis[7][7] = 1;
	dfs(1,1,vis);
	cout << cnt;
	return 0;
}
