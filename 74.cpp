#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>
//https://twpower.github.io/93-how-to-use-priority_queue-in-cpp
using namespace std;

int main(){
	priority_queue<int, vector<int>, greater<int> > pq;
	int inp;
	while(true){
		cin >> inp;
		if(inp==-1)
			break;
		if(inp==0){
			if(pq.empty()==true)
				cout << -1 <<endl;
			else{
				cout << pq.top() << endl;
				pq.pop();
			}
		}else{
			pq.push(inp);
		}
	}
	return 0;
}

