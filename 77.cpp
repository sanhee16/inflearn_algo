#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int n,m;

vector<int> v;


int main(){
	cin >> n >> m;
	int a,b;
	for(int i=0;i<=n;i++)
		v.push_back(i);
	for(int i=0;i<m;i++){
		cin >> a >> b;
		int ch = v[b];
		for(int j=1;j<=n;j++){
			if(ch==v[j])
				v[j] = v[a];
		}
	}
	
	cin >> a >> b;
	
	if(v[a]==v[b])
		cout << "YES";
	else
		cout << "NO";	
	return 0;
}
