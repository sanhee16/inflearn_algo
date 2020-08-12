#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 100001
/*
10 2
3 -2 -4 -9 0 3 7 13 8 -3
*/
int inp[MAX] = {0, };
int main(){
	int n=0, k=0;
	int big = -100000000, sum_tmp = 0;
	cin >> n >> k;
	int loop = 0;
	int t1 = 0, num = 0;
	for(int i=0; i<n; i++){
		loop++;
		cin >> num;
		inp[i] = num;
		sum_tmp += num;
		if(loop < k)
			continue;
		if(loop > k)
			sum_tmp -= inp[i-k];
		if(big < sum_tmp)
			big = sum_tmp;
	}
	cout << big;
	return 0;
}
