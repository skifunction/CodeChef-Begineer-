#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int p, m, v;
	cin >> p >> m >> v;
	m -= p - 1;
	cout << m * v;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
