#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	float b;
	int base;
	cin >> b;
	base = floor(b/2) - 1;
	if(base > 0){
		base = (base * (base + 1)) / 2;
		cout << base;
	}
	else
		cout << 0;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
