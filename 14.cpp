#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
int prime[100001] = {0, };
/*
5
32 55 62 3700 250
*/
void select_prime();
int main(){
	int n = 0;
	string str;
	cin >> n;
	select_prime();
	
	for(int i=0; i<n; i++){
		cin >> str;
		string re_str = "";
		for(int j=str.length()-1; j>-1; j--){
			re_str += str[j];
		}
		int re_num = atoi(re_str.c_str());
		if(prime[re_num]==0)
			cout << re_num << " ";
	}
	return 0;
}

void select_prime(){
	int i=2;
	prime[1] = 1;
	while(true){
		if(i*i > 100001){
			break;
		}
		for(int j=i*2; j<= 100001;){
			prime[j] = 1;
			j = j + i;
		}
		i++;
	}
}
