#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

/*

6 7
3 5 1 3 1 3 2
1 2 1 3 1 1 2
1 3 1 5 1 3 4
5 1 1 3 1 3 2
3 1 1 3 1 1 2
1 3 1 3 1 2 2
2 3

*/
int main(){
	int h,w,a,b;
	vector<int> tmp;
	vector<vector<int> > v;
	vector<vector<int> > d;
	
	cin >> h >> w;
	for(int i=0;i<w+1;i++)
		tmp.push_back(0);
	for(int i=0;i<h+1;i++){
		d.push_back(tmp);
		v.push_back(tmp);
	}
	
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++)
			cin >> v[i][j];
	cin >> a >> b;
	
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++)
			d[i][j] = d[i-1][j] + d[i][j-1] - d[i-1][j-1] + v[i][j];
		
	int res = 0;
	int sum = 0;
	
	for(int i=a;i<=h;i++){
		for(int j=b;j<=w;j++){
			sum = 0;
			sum = d[i][j] - d[i-a][j] - d[i][j-b] + d[i-a][j-b];
			if(sum > res)
				res = sum;
		}
	}
	
	cout <<res;
	return 0;
}
