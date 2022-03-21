#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int C, X, Y;
	cin >> C >> X >> Y;
	cout << (C - X) * Y;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
