#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
int cnt[50001];
int main(){
	int n=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n;){
			cnt[j]++;
			j += i;
		}
	}
	for(int i=1; i<=n; i++){
		cout << cnt[i] << " "; 
	}
	return 0;
}
