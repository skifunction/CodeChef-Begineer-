#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N, X, K;
	cin >> N >> X >> K;
	if(K/X >= N)
		cout << N;
	else
		cout << K/X;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
