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
	int n, rank=1;
	cin >> n;
	vector<int> set;
	vector<pair<int,int> > stu;
	for(int i=0; i<MAX; i++){	
		set.push_back(0);
		stu.push_back({0,0});
	}
	for(int i=0; i<n; i++){
		int score;
		cin >> score;
		set[score]++;
		stu[i].first = score;
	}
	for(int i = MAX-1; i>-1; i--){
		if(set[i]>0){
			int cnt = 0;
			for(int j=0; j<n; j++){
				if(stu[j].first == i){
					stu[j].second = rank;
					cnt++;
				}				
			}
			rank += cnt;
		}
	}
	
	for(int j=0; j<n; j++){
		cout << stu[j].second << " ";
	}
	return 0;
}
