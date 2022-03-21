#include<bits/stdc++.h>
using namespace std;

int T=1;

void solution(){
	int R, C, O;
	cin >> R >> O >> C;
	if((20 - O) * 36 > R - C)
		cout << "Yes";
	else
		cout << "No";
	cout<<'\n';
}

int main(){
	//cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
