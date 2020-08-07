#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	string str;
	string str_num = "";
	int res = 0;
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if(str[i]>='0' && str[i]<='9'){
			str_num+=str[i];
		}	
	}
	int num = atoi(str_num.c_str());
	cout << num << endl;
	for(int i=1; i<=num; i++){
		if(num%i==0){
			res++;
		}
	}
	cout << res;
	return 0;
}
