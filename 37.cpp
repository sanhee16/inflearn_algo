#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
/*
5 9
1 2 3 2 6 2 3 5 7

7 5 3 2 6
*/
int main(){
	int n = 0, s = 0;
	vector<int> v;
	cin >> s >> n;
	for(int i=0; i<s; i++)
		v.push_back(0);
	for(int i=0;i<n;i++){
		int inp , hit = 0, idx = 0;
		cin >> inp;
		// hit or miss - check
		for(int j=0; j<s; j++){
			if(v[j]==inp){
				hit = 1;
				idx = j;
				break;
			}
		}
		// hit?
		if(hit==1){
			for(int j=idx; j>0; j--){
				v[j] = v[j-1];
			}
		}
		// miss? 
		else if(hit==0){
			for(int j=s-1; j>0; j--){
				v[j] = v[j-1];
			}
		}
		v[0] = inp;	
	}
	for(int i=0;i<s;i++){
		cout <<  v[i] << " ";
	}
	
	return 0;
}
