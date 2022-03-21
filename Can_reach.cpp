#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y, k;
	cin >> x >> y >> k;

	if(x % k == 0 && y % k == 0)
		cout << "Yes";
	else
		cout << "No";

	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
