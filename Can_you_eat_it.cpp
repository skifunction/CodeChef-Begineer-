#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, k, count;
	cin >> n >> k;
	if(n == 0)
		cout << n;
	else if(n%k == 0)
		cout << n/k;
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
