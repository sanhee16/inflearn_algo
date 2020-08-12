#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001
int prime[MAX] = {0, };
/*
5
32 55 62 3700 250
*/
void select_prime();
int main(){
	int n = 0, cnt = 0;
	cin >> n;
	select_prime();
	for(int i=2; i<= n; i++){
		if(prime[i]==0)
				cnt++;
	}

	cout << cnt;
	return 0;
}

void select_prime(){
	int i=2;
	prime[1] = 1;
	while(true){
		if(i*i > MAX){
			break;
		}
		for(int j=i*2; j<= MAX;){
			prime[j] = 1;
			j = j + i;
		}
		i++;
	}
}
