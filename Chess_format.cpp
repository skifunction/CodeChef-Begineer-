#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b;
	cin >> a >> b;
	int c = a + b;
	if(c < 3)
		cout << 1;
	else if(c >= 3 && c <= 10)
		cout << 2;
	else if(c >= 11 && c <= 60)
		cout << 3;
	else if(c > 60)
		cout << 4;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
