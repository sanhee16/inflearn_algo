#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int n=0, num=0;
	cin >> n;
	int big = 0, small = 100;
	for(int i=0; i<n; i++){
		cin >> num;
		if(num<small)
			small = num;
		if(num > big)
			big = num;
	}
	cout << big - small;
	return 0;
}
