#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
/*
8
5 3 4 0 2 1 1 0

4 8 6 2 5 1 3 7
*/
int main(){
	int n1 = 0, n2 = 0, n = 0;
	vector<int> res;
	cin >> n1;
	for(int i=0; i<n1; i++){
		int inp;
		cin >> inp;
		res.push_back(inp);
	}
	
	cin >> n2;
	for(int i=0; i<n2; i++){
		int inp;
		cin >> inp;
		res.push_back(101);
		for(int j=n1+i-1; j>=0; j--){
			if(res[j] <= inp){
				res[j+1] = inp;
				break;
			}else{
				res[j+1] = res[j];
				if(j==0){
					res[j] = inp;
				}
			}
		}
	}
	/*
	2 2 3 5
	
	*/
	
	n = n1 + n2;
	
	for(int i=0;i<n;i++){
		cout <<  res[i] << " ";
	}
	
	return 0;
}
