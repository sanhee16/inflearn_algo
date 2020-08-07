#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
/*
(()(()))(()
*/
int main(){
	string str;
	int res = 0;
	cin >> str;
	for(int i=0; i<str.length();i++){
		if(str[i]=='('){
			res++;	
		}else if(str[i]==')'){
			res--;
		}
		if(res < 0){
			break;
		}
	}
	if(res==0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
