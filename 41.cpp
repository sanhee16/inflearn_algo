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
	vector<int> v;
	cin >> n;
	int cnt = 0;
	int m = 1;
	for(int i=2;; i++){
		int left = n;
		m+=i;
		if(m > n)
			break;
		left -= m;
		if(left%i==0){
			int add = left/i;
			for(int j=1; j<i; j++){
				cout << add+j << " + ";
			}
			cout << add+i << " = " << n << endl;
			cnt ++;
		}
	}
	cout << cnt;
	return 0;
}
