#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 100001

int main(){
	int n = 0, cnt = 1, res = 0;
	cin >> n;
	int a = 0, b = 0;
	
	int num;
	cin >> a;
	
	for(int i=0; i<n-1; i++){
		cin >> b;
		if(a <= b){
			cnt ++;
			if(cnt > res)
				res = cnt;
		}else{
			if(cnt > res)
				res = cnt;
			cnt = 1;
		}
		a = b;
	}
	cout << res;
	
	return 0;
}
