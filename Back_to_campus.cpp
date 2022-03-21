#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	float n, k;
	cin >> n >> k;
	cout << ceil(n/k);
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
