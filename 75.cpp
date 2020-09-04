#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

struct Data{
	int money;
	int date;
	
	Data(int a, int b){
		money = a;
		date = b;
	}
	
	bool operator<(const Data &a)const{
		return date > a.date;
	}
};

int main(){
	int n,m,d;
	cin >> n;
	vector<Data> v;
	int max_date = -1e9, ans = 0;
	priority_queue<int> pq;
	for(int i=0; i<n; i++){
		cin >> m >> d;
		v.push_back({m,d});
		if(max_date < d)
			max_date = d;
	}
	sort(v.begin(),v.end());
	
	for(int i=max_date; i>=1; i--){
		for(int j=0;j<v.size();j++){
			if(v[j].date == i){
				pq.push(v[j].money);
			}else if(v[j].date < i){
				break;
			}else{
				continue;
			}
		}
		if(pq.empty()==true)
			continue;
		else{
			ans+=pq.top();
			pq.pop();
		}
	}
	
	cout << ans;
	return 0;
}

