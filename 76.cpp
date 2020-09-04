#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
int n,r, cnt=0;
vector<int> v;
void memoi(int num, int loop){
	if(loop == r){
		cnt++;
		return ;
	}
	if(num == n)
		return ;
	for(int i=num+1; i<n; i++){
		memoi(i,loop+1);
	}
	return ;
}


int main(){
	cin >> n >> r;
	for(int i=1; i<=n; i++)
		v.push_back(i);
	for(int i=0; i<n-r+1; i++){
		memoi(i,1);
	}
	cout << cnt;
	
	return 0;
}

