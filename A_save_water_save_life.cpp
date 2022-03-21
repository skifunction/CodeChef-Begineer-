#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int H, x, y, C;
	cin >> H >> x >> y >> C;
	y /= 2;
	if(C >= H * (x + y))
		cout << "Yes";
	else
		cout << "No";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
