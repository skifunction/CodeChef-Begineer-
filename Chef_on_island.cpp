#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y, xr, yr, D;
	cin >> x >> y >> xr >> yr >> D;
	x /= xr;
	y /= yr;
	if(D <= min(x, y))
		cout << "Yes";
	else
		cout << "No";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
