#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	int n;
	vector<int> tmp;
	vector<vector<int> > v;
	cin >> n;
	for(int i=0;i<n+2;i++)
		tmp.push_back(0);
	for(int i=0;i<n+2;i++)
		v.push_back(tmp);
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
			cin >> v[i][j];
		}
	}
	int dir_x[4] = {-1,1,0,0};
	int dir_y[4] = {0,0,-1,1};
	int cnt = 0;
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
			int m = v[i][j], no=0;
			for(int k=0;k<4;k++){
				if(v[i+dir_x[k]][j+dir_y[k]] >= m){
					no = 1;
					break;
				}
			}
			if(no==0){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
