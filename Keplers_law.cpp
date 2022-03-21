#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	double t1, t2, r1, r2;
	cin >> t1 >> t2 >> r1 >> r2;

	if(pow(t1, 2) / pow(r1, 3) == pow(t2, 2) / pow(r2, 3))
		cout << "Yes";
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
