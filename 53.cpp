#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int main(){
	int n, k;
	stack<int> s;
	char str[20]="0123456789ABCDEF";
	
	cin >> n >> k;
	
	while(true){
		if(n==0)
			break;
		
		s.push(n%k);
		n /= k;
	}
	
	while(true){
		if(s.empty()==true)
			break;
		printf("%c", str[s.top()]);
		s.pop();
	}
	return 0;
}

