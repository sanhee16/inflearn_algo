#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	//two pointer
	int n;
	cin >> n;
	int cnt = 0;
	vector<int> v(1502,0);
	v[1] = 1;
	int p2 = 1, p3 = 1, p5 = 1, idx = 2;
	while(true){
		int v2, v3, v5;
		v2 = v[p2] * 2;
		v3 = v[p3] * 3;
		v5 = v[p5] * 5;
		int min = 1e9;
		if(v2 < min)
			min = v2;
		if(v3 < min)
			min = v3;
		if(v5 < min)
			min = v5;
		v[idx] = min;
		if(idx==n)
			break;
		if(v2==min)
			p2++;
		if(v3==min)
			p3++;
		if(v5==min)
			p5++;
		idx++;
	}
	cout << v[n];
	
	return 0;
}
