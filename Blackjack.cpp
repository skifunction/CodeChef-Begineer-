#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b;
	cin >> a >> b;
	int chance = 21-a-b;
	if(chance <= 10)
		cout << chance;
	else
		cout << -1;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
