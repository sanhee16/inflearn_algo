#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	int n,k,sum=0;
	int idx = 0;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int inp;
		cin >> inp;
		v.push_back(inp);
		sum += inp;
	}
	cin >> k;
	if(sum<=k){
		cout << "-1";
		return 0;
	}
	while(true){
		if(v[idx]>0){
			v[idx]--;
			k--;
		}
		if(k==-1){
			cout << idx+1;
			return 0;
		}
		idx++;
		if(idx == n)
			idx = 0;
	}
	return 0;
}
