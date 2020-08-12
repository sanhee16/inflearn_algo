#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int n, cnt;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		int x = i;
		while(true){
			if(x==0)
				break;
			cnt ++;
			x /= 10;
		}
	}

	cout << cnt;


	return 0;
}
