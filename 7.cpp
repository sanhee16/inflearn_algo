#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
/*
bE au T I fu L
*/
int main(){
	char str[1001];
	string res="";
	gets(str);
	
	for(int i=0; str[i]!='\0';i++){
		if(str[i]==' ')
			continue;
		if(str[i] <= 'Z' && str[i] >= 'A'){
			res+=str[i]-'A'+ 'a';
		}else{
			res += str[i];
		}
	}
	cout << res;
	
	return 0;
}
