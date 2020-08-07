#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int a=0, b=0, res=0;
	cin >> a >> b;
	for(int i=a; i<b; i++){
		cout << i << " +";
		res += i;
	}
	res+=b;
	cout << b << " = " << res;
	return 0;
}
