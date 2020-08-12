#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001
int ana[52] = {0, };

int main(){
	//26 26
	string str1, str2;
	cin >> str1 >> str2;
	if(str1.length() != str2.length()){
		cout << "NO";
		return 0;
	}
	
	int tmp1 = 'A' , tmp2 = 'a';
	for(int i=0; i<str1.length(); i++){
		if(str1[i] >= 'A' && str1[i] <= 'Z'){
			ana[str1[i]-tmp1+26]++;
		}else if(str1[i] >= 'a' && str1[i] <= 'z'){
			ana[str1[i]-tmp2]++;
		}else{
			cout << "NO";
			return 0;	
		}
	}
	for(int i=0; i<str2.length(); i++){
		if(str2[i] >= 'A' && str2[i] <= 'Z'){
			ana[str2[i]-tmp1+26]--;
		}else if(str2[i] >= 'a' && str2[i] <= 'z'){
			ana[str2[i]-tmp2]--;
		}else{
			cout << "NO";
			return 0;	
		}
	}
	
	for(int i=0; i< 52; i++){
		if(ana[i]!=0){
			cout << "NO";
			return 0;
			
		}
	}
	cout << "YES";
	return 0;
}
