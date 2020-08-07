#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	string str;
	char gen;
	int age = 0;
	int tmp_age = 0;
	cin >> str;
	tmp_age = atoi(str.substr(0,2).c_str());
	if(str[7]=='1'){
		//male
		gen = 'M';
		age = 119 - tmp_age +1 ;
		
	}else if(str[7]=='3'){
		//male
		gen = 'M';
		age = 19 - tmp_age +1 ;
		
	}else if(str[7]=='2'){
		//female
		gen = 'W';
		age = 119 - tmp_age +1;
		
	}else if(str[7]=='4'){
		//female
		gen = 'W';
		age = 19 - tmp_age +1 ;
		
	}
	cout << age << " " << gen ;
	return 0;
}
