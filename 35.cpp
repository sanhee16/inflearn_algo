#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	int n = 0;
	vector<int> v;
	for(int i=0; i<100; i++)
		v.push_back(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=1; j<n-i; j++){
			if((v[j-1] < 0 && v[j] < 0)||(v[j-1] > 0 && v[j] > 0)){
				continue;
			}else if(v[j-1] > v[j]){
				int tmp = v[j];
				v[j] = v[j-1];
				v[j-1] = tmp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout <<  v[i] << " ";
	}
	
	
	return 0;
}
