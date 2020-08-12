#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001

int main(){
	int n = 0, m = 0;
	cin >> n >> m;
	int res = 0, cnt = 0;
	for(int i=0; i<n; i++){
		int tmp = 0;
		cin >> tmp;
		if(tmp > m){
			cnt++;
		}else{
			cnt = 0;
		}
		if(cnt > res){
			res = cnt;
		}
	}
	cout << res;
	return 0;
}
