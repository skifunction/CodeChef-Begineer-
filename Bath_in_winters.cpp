#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y;
	cin >> x >> y;
	cout << x /(2*y);
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
