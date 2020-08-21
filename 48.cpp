#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
/*
3 23 85 34 17 74 25 52 65
10 7 39 42 88 52 14 72 63
87 42 18 78 53 45 18 84 53
34 28 64 85 12 16 75 36 55
21 77 45 35 28 75 90 76 1
25 87 65 15 28 11 37 28 74
65 27 75 41 7 89 78 64 39
47 47 70 45 23 65 3 41 44
87 13 82 38 50 12 48 29 80
*/
int main(){
	vector<int> t;
	vector<vector<int> > v;
	vector<int> avg;
	
	for(int i=0;i<9;i++)
		t.push_back(0);
	for(int i=0;i<9;i++)
		v.push_back(t);
	for(int i=0;i<9;i++){
		float sum = 0.0;
		for(int j=0;j<9;j++){
			int inp;
			cin >> inp;
			sum += inp;
			v[i][j] = inp;
		}
		avg.push_back(round(sum/9));
	}
	for(int i=0;i<9;i++){
		int a = avg[i];
		int diff = 1e9, diff_idx = 0;
		cout << a << " ";
		for(int j=0;j<9;j++){
			int tmp = abs(v[i][j]-a);
			if(tmp < diff){
				diff = tmp;
				diff_idx = j;
			}
		}
		cout << v[i][diff_idx] << endl;
	}
	
	return 0;
}
