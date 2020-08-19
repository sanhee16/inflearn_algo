#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
/*
6
11 7 5 6 10 9

5 7 11 6 9
*/
int main(){
	int n = 0;
	vector<int> v;
	for(int i=0; i<100; i++)
		v.push_back(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	
	for(int j = 1; j<n; j++){
		int tmp = v[j];
		int idx = -1;
		for(int k=j-1; k>-1; k--){
			if(v[k] > tmp){
				v[k+1] = v[k];
			}else{
				idx = k;
				break;
			}
		}
		v[idx+1] = tmp;
		for(int i=0;i<n;i++){
			cout <<  v[i] << " ";
		}
		cout << "\n---------\n";
	}
	
	
	for(int i=0;i<n;i++){
		cout <<  v[i] << " ";
	}
	
	return 0;
}
