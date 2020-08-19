#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	int key,m;
	cin >> m >> key;
	vector<int> v;
	
	for(int i=0; i<m; i++){
		int inp;
		cin >> inp;
		v.push_back(inp);
	}
	sort(v.begin(),v.end());
	int mid = 0, lt = 0, rt = m-1; 
	while(true){
		if(lt > rt)
			break;
		mid = (lt + rt) / 2;
		if(v[mid]==key){
			cout << mid+1;
			break;
		}else if(v[mid]<key){
			lt = mid+1;
		}else{
			rt = mid-1;
		}
	}
	return 0;
}
