#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;
#define MAX 1001
//int set[MAX] = {0,};
int main(){
	vector<pair<int,int> > prime;
	vector<int> mul;
	queue<int> res;
	int prime_cnt = 0;
	
	for(int i=0; i<MAX; i++)
		prime.push_back({0,0});
	/* 
	prime 2 3 5 7 11 13 17 19 23 31 37 41 43 47 53 57 
	
	5 4 3 2 1
	2 2 2 3 5
	*/
	for(int i=2; i*i<MAX; i++){
		if(prime[i].first==0){
			for(int j = i*2; j < MAX;){
				prime[j].first = 1; // not prime number
				j += i;
			}
		}
	}
	
	int n=0;
	cin >> n;
	int num = 1;
	for(int i=2; i<=n; i++){
		num = i;
		int j = 2;
		while(true){
			if(num==1)
				break;
			int cnt = 0;
			if(prime[j].first==0){
				while(true){
					if(num%j==0){
						cnt++;
						num /= j;
					}else{
						break;
					}
				}
				if(prime[j].second==0){
					prime_cnt++;
				}
				prime[j].second += cnt;
			}
			j++;
		}
	}
	
	cout << n <<"! = ";
	int j = 2;
	int cnt = 0;
	while(true){
		if(prime[j].first==0){
			cout << prime[j].second << " ";
			cnt++;
		}
		if(cnt == prime_cnt)
			break;
		j++;
		
	}
	
	
	return 0;
}
