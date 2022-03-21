#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n;
	cin >> n;
	if(n < 6){
		cout << 0;
		goto x;
	}
	n -= 6;
	n /= 7;
	n++;

	if(n > 0)
		cout << n;
	x:
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
