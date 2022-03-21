#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int P;
	cin >> P;
	if(P % 2 == 0)
		cout << P/2 + 1;
	else
		cout << (P + 1) / 2;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
