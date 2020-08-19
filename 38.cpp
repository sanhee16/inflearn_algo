#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
/*
8
5 3 4 0 2 1 1 0

4 8 6 2 5 1 3 7
*/
int main(){
	int n = 0;
	vector<int> v;
	vector<int> res;
	cin >> n;
	for(int i=0; i<n; i++){
		v.push_back(0);
		res.push_back(100);
	}
	for(int i=0; i<n; i++)
		cin >> v[i];
		
	int cnt;
	for(int j=0; j<n; j++){
		cnt = -1;
		for(int i=0; i<n; i++){
			if(res[i] > j+1){
				cnt++;
			}
			if(cnt == v[j]){
				res[i] = j+1;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout <<  res[i] << " ";
	}
	
	return 0;
}
