#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
/*
100000000 -> 788888898
*/
int main(){
	long long n;
	long long cnt = 0;
	string str;
	cin >> str;
	
	long long add_num = 1;
	for(int i=1; i< str.length(); i++){
		cnt += i*9*add_num;
		add_num *= 10;
	}
	
	cnt += (atoi(str.c_str()) - add_num + 1)*(str.length());
	
	
	cout << cnt;
	return 0;
}
