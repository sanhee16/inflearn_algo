#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	vector<int> v;
	int n = 0, num = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end(),greater<int>());
	int a = v[0], b = 0;
	int rank = 1;
	for(int i=1; i<n; i++){
		b = v[i];
		if(a == b){
			
		}else{
			rank++;
		}
		if(rank==3){
			cout << v[i];
			break;
		}
		
		a = b;
	}
	if(rank < 3){
		cout << "0";
	}
	return 0;
}
