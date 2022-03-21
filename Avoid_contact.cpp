#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y;
	cin >> x >> y;
	x -= y;
	if(x == 0)
		x--;
	cout << x + 2 * y;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
