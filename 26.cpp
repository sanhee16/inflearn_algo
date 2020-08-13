#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <math.h>

using namespace std;
#define MAX 101
//int set[MAX] = {0,};

int main(){
	int n = 0;
	vector<pair<int,int> > v;
	for(int i=0; i<=10000; i++)
		v.push_back({0,0});
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> v[i].first;
		int rank = i+1;
		for(int j=0; j<i; j++){
			if(v[j].first < v[i].first){
				rank--;	
			}
		}
		v[i].second = rank;
	}	
	for(int i=0; i<n; i++){
		cout << v[i].second << " ";
	}
	
	return 0;
}
