#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	float x1, x2;
	float y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	float p1, p2;
	p1 = y1 / x1;
	p2 = y2 / x2;
	if(p1 < p2)
		cout << -1;
	else if(p1 == p2)
		cout << 0;
	else
		cout << 1;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
