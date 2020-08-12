#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001
/*
5
2 3 3 1 3
1 1 2 2 3
*/
int a[101] = {0, };
int b[101] = {0, };
int main(){
	int n = 0;
	cin >> n;
	for(int j=0; j<n; j++){
		cin >> a[j];
	}
	for(int j=0; j<n; j++){
		cin >> b[j];
	}
	for(int i=0; i<n; i++){
		if(a[i]==1 && b[i]==3){
			cout << "A" << endl;
		}else if(a[i]==3 &&  b[i]==1){
			cout << "B" << endl;
		}else if(a[i]==b[i]){
			cout << "D" << endl;	
		}else if(a[i] < b[i]){
			cout << "B" << endl;
		}else if(a[i] > b[i]){
			cout << "A" << endl;
		}
	}
	
	return 0;
}
