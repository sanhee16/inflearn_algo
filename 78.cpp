#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
int v,e;
vector<int> vis;
vector<vector<int> > road;

int main(){
	cin >> v >> e;
	int a,b,c,res=0;
	for(int i=0;i<=v;i++)
		vis.push_back(0);
	for(int i=0;i<=v;i++)
		road.push_back(vis);
		
	for(int i=0;i<e;i++){
		cin >> a >> b >> c;
		road[a][b] = c;
		road[b][a] = c;
	}
	vis[1] = 1;
	vector<int> group;
	group.push_back(1);
	while(true){
		if(group.size()==v)
			break;
			
		int min = 1e9, min_idx = 0;
		for(int i=1;i<=v;i++){
			if(vis[i]==0)
				continue;
			for(int j=1;j<=v;j++){
				if(road[i][j]!=0 && vis[j]==0){
					if(min > road[i][j]){
						min = road[i][j];
						min_idx = j;
					}
				}
			}
		}
		vis[min_idx] = 1;
		group.push_back(min_idx);
		res += min;
	}
	cout << endl << res;
	return 0;
}


/*
9 12
1 2 12
1 9 25
2 3 10
2 8 17
2 9 8
3 4 18
3 7 55
4 5 44
5 6 60
5 7 38
7 8 35
8 9 15
*/



