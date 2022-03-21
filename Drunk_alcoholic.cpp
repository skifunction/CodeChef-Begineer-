#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int k;
	cin >> k;
	k = (k%2) ? (k + 2) : k;	
	cout << k;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
