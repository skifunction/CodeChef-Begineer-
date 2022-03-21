#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N, A, B;
	cin >> N;
	if(N%2 == 0){
		A = 2;
		B = N/2;
	}
	else{
		A = 1;
		B = N;
	}
	cout << A <<' '<< B;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
