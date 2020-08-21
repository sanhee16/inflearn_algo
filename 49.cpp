#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	int n;
	vector<int> t;
	vector<vector<int> > v;
	cin >> n;
	for(int j=0;j<n;j++)
		t.push_back(0);
	for(int j=0;j<n;j++)
		v.push_back(t);
		
	for(int i=0;i<n;i++){
		int inp;
		cin >> inp;
		for(int j=0;j<n;j++){
			v[j][i] = inp;
		}
	}
	for(int i=0;i<n;i++){
		int inp;
		cin >> inp;
		for(int j=0;j<n;j++){
			if(v[i][j]>inp)
				v[i][j] = inp;	
			
		}	
	}
	int res = 0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			res+=v[i][j];
	
	cout << res;
	
	
	return 0;
}
