#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x;
	cin >> x;
	if(x%10 == 0)
		cout << 0;
	else if(x%10 == 5)
		cout << 1;
	else
		cout << -1;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
