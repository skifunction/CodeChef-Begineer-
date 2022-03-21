#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a + b == 1)
		cout << 1;
	else if(b + c == 1)
		cout << 1;
	else if(c + a == 1)
		cout << 1;
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
