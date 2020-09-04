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
6 9
1 3
1 4
2 1
2 5
3 4
4 5
4 6
6 2
6 5
*/
int n,m;
vector<vector<int> > g;
vector<int> tmp;

int bfs(int target){
	queue<pair<int,int> > q;
	int ans = 1e9;
	q.push({1,0});
	vector<int> vis;
	for(int i=0;i<n+1;i++)
		vis.push_back(0);
	vis[1] = 1;
		
	while(true){
		if(q.empty()==true)
			break;
		int v = q.front().first;
		int cnt = q.front().second;
		q.pop();
		cnt++;
		for(int i=0;i<n+1;i++){
			if(vis[i]==0 && g[v][i]==1){
				vis[i]=1;
				if(i==target){
					if(ans > cnt)	
						ans = cnt;			
				}else{
					q.push({i,cnt});
				}
			}
		}
	}
	return ans;
}

int main(){
	vector<int> vis;
	cin >> n >> m;
	int a,b;
	for(int i=0;i<n+1;i++){
		tmp.push_back(0);
	}
	for(int i=0;i<n+1;i++){
		g.push_back(tmp);
	}
	for(int i=0;i<m;i++){
		cin >> a >> b;
		g[a][b] = 1;
	}
	for(int i=2;i<=n;i++){
		int res = bfs(i);
		cout << i << " : " << res << endl;
	}
	return 0;
}
