#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int digit_sum(int x);
int main(){
	int n, digit = 0, res = 0, res_num = 0;
	string num;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> num;
		int int_num = atoi(num.c_str());
		
		digit = digit_sum(int_num);
		
		if(res < digit){
			res = digit;
			res_num = int_num;
		}else if(res == digit){
			if(res_num < int_num)
				res_num = int_num;
		}
		digit = 0;
	}
	cout << res_num;
	
}
int digit_sum(int x){
	int res = 0;
	while(true){
		if(x == 0)
			break;
		res += x%10;
		x /= 10;
	}
	return res;
}
