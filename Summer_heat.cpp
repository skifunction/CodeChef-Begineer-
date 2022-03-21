#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int xa, xb, Xa, Xb;
	cin >> xa >> xb >> Xa >> Xb;
	cout << (Xa / xa) + (Xb / xb);
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
