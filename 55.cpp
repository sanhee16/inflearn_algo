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
	stack<int> s;
	int chk = 1;
	int out = 0;
	string str = "";
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		s.push(num);
		str+="P";
		while(true){
			if(s.empty()==true){
				break;
			}
			if(s.top() == chk){
				s.pop();
				str+="O";
				out++;
				chk++;
			}else{
				break;
			}
		}
	}
	
		
	if(s.empty()==true){
		cout << str;
	}else{
		cout << "impossible";
	}
	
	return 0;
}


