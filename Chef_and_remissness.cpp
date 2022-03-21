#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b;
	cin >> a >> b;
	cout << max(a, b) << ' ' << a + b;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
