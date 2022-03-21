#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y, z;
	cin >> x >> y >> z;
	cout << (z * x) - (y * x);
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
