#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
#define MAX 1001
//int set[MAX] = {0,};
int main(){
	vector<int> v;
	int n = 0;
	int num = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		cout << v[i] << " ";
	}
	
	
	return 0;
}
