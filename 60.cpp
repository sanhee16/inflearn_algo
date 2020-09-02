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
int flag = 0;
vector<int> sum(56,0);
vector<int> num;
void dfs(int lv, vector<int> ch){
	if(flag==1)
		return ;
	if(lv==n){
		int tmp_sum1 = 0;
		int tmp_sum2 = 0;
		for(int i=0; i<n; i++){
			if(ch[i]==1)
				tmp_sum1 += num[i];
			else
				tmp_sum2 += num[i];
		}
		if(tmp_sum1 == tmp_sum2){
			cout << "YES";
			flag = 1;
			return ;
		}
		return ;
	}else{
		dfs(lv+1, ch);
		ch[lv]=1;
		dfs(lv+1, ch);
	}
	return ;
}

int main(){
	vector<int> ch;
	cin >> n;
	for(int i=0; i<n; i++){
		num.push_back(0);
		ch.push_back(0);
	}
	for(int i=0; i<n; i++)
		cin >> num[i];
		
	dfs(1,ch);
	if(flag==0)
		cout << "NO";
	return 0;	
}
