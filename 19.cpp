#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001
/*
56 46 55 76 65 53 52 53 55 50
76 65 55
*/
int he[101];
int main(){
	int n = 0, cnt = 0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> he[i];	
	}
	int big = he[n-1];
	for(int i=n-2; i>-1; i--){
		if(he[i] > big){
			cnt++;
			big = he[i];
		}
	}
	cout << cnt;
	return 0;
}
