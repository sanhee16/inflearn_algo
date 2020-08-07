#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int n=0, res=0, start = 0;
	cin >> n;
	for(int i=1; i<n; i++){
		if(n%i==0){
			if(start==1)
				cout << "+";
			start = 1;
			cout << i;
			res+=i;
		}
	}
	cout << "=" <<res;	
	return 0;
}
