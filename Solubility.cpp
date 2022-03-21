#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, a, b;
	cin >> x >> a >> b;
	cout << (a + (100 - x) * b) * 10;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
