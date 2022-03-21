#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int G1, S1, B1;
	int G2, S2, B2;
	cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
	if(G1 + S1 + B1 > G2 + S2 + B2)
		cout << 1;
	else 
		cout << 2;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
