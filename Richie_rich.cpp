#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b, x;
	cin >> a >> b >> x;
	b -= a;
	b /= x;
	cout << b;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
