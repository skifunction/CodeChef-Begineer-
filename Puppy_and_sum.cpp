#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int d, n;
	cin >> d >> n;
	while(d--){
		n = (n * (n + 1)) / 2;
	}
	cout << n;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
