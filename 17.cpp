#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001

int main(){
	int n = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		int num , stuAns;
		cin >> num >> stuAns;
		int ans = 0;
		if(num%2==0){
			int tmp = num + 1;
			ans = tmp * (num/2);
		}else{
			int tmp = num + 1;
			ans = tmp * (num/2) + num/2+1;
		}
		if(stuAns==ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	
	return 0;
}
