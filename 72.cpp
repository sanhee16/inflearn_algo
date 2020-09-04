#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	queue<int> q;
	for(int i=1; i<=n; i++)
		q.push(i);
	int p = 0, cnt = 0;
	while(true){
		if(q.empty()==true)
			break;
		p = q.front();
		cnt++;
		q.pop();
		if(cnt==k)
			cnt=0;
		else
			q.push(p);
	}
	cout << p;
	return 0;
}
