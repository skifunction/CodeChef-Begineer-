#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int m, n, k;
	cin >> m >> n >> k;
	if(n*k < m)
		cout << "Yes";
	else
		cout << "No";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
