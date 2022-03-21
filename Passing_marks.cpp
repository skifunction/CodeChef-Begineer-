#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int Am, Bm, Cm, Tm;
	int A, B, C;
	cin >> Am >> Bm >> Cm >> Tm >> A >> B >> C;
	if(A + B + C >= Tm){
		if(A >= Am && B >= Bm && C >= Cm)
			cout << "Yes";
		else
			cout << "No";
	}
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
