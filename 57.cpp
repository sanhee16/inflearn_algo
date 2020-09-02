#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;


int n;
// 5 2 1
void printBin(int x){
	if(x==0)
		return ;
	printBin(x/2);
	cout << x%2;
	return ;
}
int main(){
	cin >> n;
	printBin(n);
	return 0;
}
