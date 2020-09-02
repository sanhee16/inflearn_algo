#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int n;
void dfs(int lv, vector<int> ch){
	if(lv==n+1){
		for(int i=1; i<=n; i++){
			if(ch[i]==1)
				cout << i << " ";
		}
		cout << "\n";
		return ;
	}else{
		ch[lv]=1;
		dfs(lv+1, ch);
		ch[lv]=0;
		dfs(lv+1, ch);
	}
	return ;
}

int main(){
	vector<int> ch;
	cin >> n;
	for(int i=0; i<=n; i++)
		ch.push_back(0);
		
	dfs(1,ch);
	
	return 0;	
}
