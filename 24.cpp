#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <math.h>

using namespace std;
#define MAX 101
int set[MAX] = {0,};

int main(){
	int n;
	int a,b;
	cin >> n >> a;
	for(int i=0; i<n-1; i++){
		cin >> b;
		int sub = abs(a-b);
		if(set[sub]==0){
			set[sub]=1;
		}else{
			cout << "NO";
			return 0;
		}
		a = b;
	}
	for(int i=1; i<n; i++){
		if(set[i]==1)
			continue;
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
