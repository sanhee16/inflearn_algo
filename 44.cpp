#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
/*
5 3
1 2 8 4 9
1 - 4 - 9

*/
int main(){
	int n,c;
	cin >> n >> c;
	vector<int> v;
	
	int big = 0, small = 1e9;
	for(int i=0;i<n;i++){
		int inp;
		cin >> inp;
		v.push_back(inp);
		if(inp < small)
			small = inp;
		if(inp > big)
			big = inp;
	}
	sort(v.begin(), v.end());
	
	int lt=small, rt=big, mid = 0, res = 1;
	while(true){
		if(lt > rt)
			break;
		mid = (lt+rt)/2;
		
		int tmp = v[0]+mid, cnt = 1, idx = 0;
		while(true){
			idx++;
			if(idx == n){
				rt = mid-1;
				break;
			}
			if(tmp <= v[idx]){
				tmp = v[idx] + mid;
				cnt++;
			}
			if(cnt == c){
				if(res < mid)
					res = mid;
				lt = mid+1;	
				break;
			}
		}
	}
	
	
	cout << res;
	
	return 0;
}
