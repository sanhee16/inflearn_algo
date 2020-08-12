#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
int cnt[10];

int main(){
	string n;
	cin >> n;
	
	for(int i=0; i<n.length(); i++){
		cnt[atoi(n.substr(i,1).c_str())]++;
	}
	int big = 0 , big_num = 0;
	for(int i=0; i<10; i++){
		if(big <= cnt[i]){
			big = cnt[i];
			big_num = i;
		}
	}
	
	cout << big_num;
	return 0;
}
