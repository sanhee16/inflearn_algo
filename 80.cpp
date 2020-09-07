#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int n,m;
vector<int> res;
vector<int> vis;
vector<vector<int> > v;
void bfs(){
	queue<pair<int,int> > q;
	q.push({1,0});
	
	while(true){
		if(q.empty()==true)
			break;
		int idx = q.front().first;
		int val = q.front().second;
		q.pop();
		vis[idx] = 1;
		
		for(int i=2; i<=n; i++){
			if(vis[i]==0 && v[idx][i] > 0){
				res[i] = v[idx][i] + val;
				q.push({i,res[i]});
			}else if(vis[i]==1 && v[idx][i] > 0){
				if(v[idx][i] + val < res[i]){
					res[i] = v[idx][i] + val;
					q.push({i,res[i]});
				}
			}
		}
	}
}
int main(){
	cin >> n >> m;
	int a,b,c;
	
	for(int i=0; i<=n;i++)
		vis.push_back(0);
	for(int i=0; i<=n;i++){
		v.push_back(vis);
		res.push_back(0);
	}
		
	for(int i=0;i<m;i++){
		cin >> a >> b >> c;
		v[a][b] = c;
	}
	for(int i=2; i<=n;i++){	
		bfs();
	}
	
	
	
	for(int i=2; i<=n;i++){
		if(res[i]==0)
			cout << i << " : " << "impossible"<<endl;
		else
			cout << i << " : " << res[i] << endl; 
	}
	
	return 0;
}
