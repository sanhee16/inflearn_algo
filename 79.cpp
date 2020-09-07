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

struct Data{
	int ed;
	int idx;
	Data(int a, int b){
		ed = a;
		idx = b;
	}
	bool operator < (const Data& a)const{
		return ed > a.ed;
	}
};

priority_queue<Data> pq;
vector<Data> group;
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
	group.push_back(Data(1e9,0));
	group.push_back(Data(0,1));
	for(int i=2;i<=v;i++)
		group.push_back(Data(1e9,i));
	for(int i=1;i<=v;i++)
		pq.push(group[i]);
		
		
	for(int i=0; i<v; i++){
		int idx = 0;
		Data tmp = Data(0,0);
		while(true){
			tmp = pq.top();
			pq.pop();
			if(vis[tmp.idx]==0)
				break;
		}
		vis[tmp.idx]=1;
		res += tmp.ed;
		for(int j=1; j<=v; j++){
			if(vis[j]==0 && road[tmp.idx][j]!=0){
				pq.push(Data(road[tmp.idx][j],j));
			}
		}
	}


	cout << res << endl;
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

