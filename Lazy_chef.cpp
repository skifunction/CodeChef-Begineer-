#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, m, d;
	cin >> x >> m >> d;
	cout << min(x*m, x + d);
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
