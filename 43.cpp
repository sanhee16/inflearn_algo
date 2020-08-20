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
	vector<int> v;
	cin >> n >> m;
	int sum = 0;
	for(int i=0;i<n;i++){
		int inp;
		cin >> inp;
		sum+=inp;
		v.push_back(inp);
	}
	//answer check 
	int mid = 0, lt = 1, rt = sum, res = 1e9;
	while(true){
		// break condition
		if(lt > rt)
			break;
		// not break ...
		mid = (lt+rt)/2;
		int tmp_sum = 0;
		int cnt = 1;
		for(int i=0;i<n;i++){
			if(v[i]>mid){	
				cnt = 1e9;
				break;
			}
			tmp_sum+=v[i];
			if(tmp_sum > mid){
				tmp_sum = v[i];
				cnt++;
			}
		}
		if(cnt <= m){
			if(res > mid)
				res = mid;
			//mid canbe answer -> rt discrease
			rt = mid-1;
		}else{
			//mid cannot be answer -> lt increase
			
			lt = mid+1;
		}
	}
	cout << res;
	
	return 0;
}
