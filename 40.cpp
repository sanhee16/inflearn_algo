#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	int n, m;
	vector<int> v1;
	vector<int> v2;
	vector<int> res;
	cin >> n;
	for(int i=0; i<n; i++){
		int inp;
		cin >> inp;
		v1.push_back(inp);
	}
	cin >> m;
	for(int i=0; i<m; i++){
		int inp;
		cin >> inp;
		v2.push_back(inp);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int idx1 = 0, idx2 = 0;
	/*
	5
	2 7 10 5 3
	5
	3 10 5 17 12
*/
	while(true){
		if(idx1 == n || idx2 == m)
			break;
		if(v1[idx1] == v2[idx2]){
			res.push_back(v1[idx1]);
			idx1++;
			idx2++;
		}else if(v1[idx1] < v2[idx2]){
			idx1++;
		}else if(v1[idx1] > v2[idx2]){
			idx2++;
		}
	}
	
	for(int i=0; i<res.size();i++)
		cout << res[i] << " ";
	return 0;
}
