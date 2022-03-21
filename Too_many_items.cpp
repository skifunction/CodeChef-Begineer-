#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N;
	cin >> N;
	if(N % 10 == 0)
		cout << N / 10;
	else
		cout << (N / 10) + 1;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
