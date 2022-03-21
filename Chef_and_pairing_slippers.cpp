#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, l, x;
	cin >> n >> l >> x;
	cout << min(l, n-l) * x;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
