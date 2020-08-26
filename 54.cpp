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
	stack<char> s;
	string str;
	cin >> str;
	int cnt = 0;
	int size = str.length();
	for(int i=0; i<size; i++){
		char tmp = str[i];
		if(tmp == '('){
			cnt++;
		}else if(tmp == ')'){
			if(cnt>0)
				cnt--;
			else{
				cout << "NO";
				return 0;
			}
		}
	}
	if(cnt==0)
		cout << "YES";
	else
		cout << "NO";
		
	return 0;
}
