#include<bits/stdc++.h>
using namespace std;

int T=1;

void solution(){
	char a, b;
	cin >> a >> b;
	if(a == 'R' || b == 'R')
		cout << 'R';
	else if(a == 'B' || b == 'B')
		cout << 'B';
	else
		cout << 'G';
	cout<<'\n';
}

int main(){
	//cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
