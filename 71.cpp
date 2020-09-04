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
int s,e;
vector<vector<int> > g;
vector<int> vis(10001,0);
int dx[3] = {1,5,-1};

void bfs(){
	queue<pair<int,int> > q;
	q.push({s,0});
	vis[s] = 1;
	int ans = 1e9;
	while(true){
		if(q.empty()==true)
			break;
		int v = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if(v==e){
			if(ans > cnt)
				ans = cnt;
			continue;
		}
		if(v > 10000 || v < 1)
			continue;
		if(v < e){
			for(int i=0; i<2; i++){
				int next = v + dx[i];
				if(vis[next]==0){
					vis[next]=1;
					q.push({next,cnt+1});
				}
			}
		}else{
			int next = v + dx[2];
			if(vis[next]==0){
				vis[next]=1;
				q.push({next,cnt+1});
			}
		}
	}
	cout << ans;
	return ;
}

int main(){
	cin >> s >> e;
	bfs();
	return 0;
}

