#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 == x2 || y1 == y2)
		cout << "YES";
	else
		cout << "NO";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
