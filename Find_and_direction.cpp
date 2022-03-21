#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x;
	cin >> x;
	if(x % 4 == 0)
		cout << "North";
	else if(x % 4 == 1)
		cout << "East";
	else if(x % 4 == 2)
		cout << "South";
	else
		cout << "West";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
