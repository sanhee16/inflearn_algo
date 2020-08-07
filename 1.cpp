#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int n=0, m=0, res=0;
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		if(i%m == 0)
			res += i;
	}
	cout << res;
	return 0;
}
