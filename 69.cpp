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
1 2
1 3
2 4
2 5
3 6
3 7
*/
vector<vector<int> > tr;
vector<int> vis;
void bfs(int start){
	queue<int> q;
	q.push(start);
	vis[start] = 1;
	while(true){
		if(q.empty()==true)
			break;
		int v = q.front();
		q.pop();
		for(int i=0;i<8;i++){
			if(vis[i]==0 && tr[v][i]==1){
				vis[i]=1;
				q.push(i);
			}
		}
		cout << v << " ";
	}
}

int main(){
	for(int i=0; i<8; i++)
		vis.push_back(0);
	for(int i=0; i<8; i++)
		tr.push_back(vis);
		
	int a,b;
	for(int i=0; i<6; i++){
		cin >> a >> b;
		tr[a][b] = 1;
		tr[b][a] = 1;
	}
	bfs(1);
	
	
	return 0;
}
