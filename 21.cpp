#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
#define MAX 200001
/*
4 5 6 7 0 1 2 3 9 8
1 2 3 4 5 6 7 8 9 0
->
16 13
A
*/

int main(){
	string winner;
	string last_winner;
	int a[10] = {0,} , b[10] = {0,};
	int totalA = 0, totalB = 0;
	for(int i=0; i<10; i++){
		cin >> a[i];
	}
	for(int i=0; i<10; i++){
		cin >> b[i];
	}
	for(int i=0; i<10; i++){
		if(a[i] == b[i]){
			totalA++;
			totalB++;
		}else if(a[i] > b[i]){
			totalA += 3;
			last_winner = 'A';
		}else if(a[i] < b[i]){
			totalB += 3;
			last_winner = 'B';
		}
		if(i==9){
			if(totalA == totalB){
				if(totalA == 10 && totalB == 10){
					winner = 'D';
				}else{
					winner = last_winner;
				}	
			}else{
				if(totalA > totalB)
					winner = 'A';
				else
					winner = 'B';
			}
		}
	}
	cout << totalA << " " << totalB << endl << winner;
	return 0;
}
