#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int h, m;
	cin >> h >> m;
	int bmi = h / (m * m);
	if(bmi <= 18)
		cout << 1;
	else if(bmi > 18 && bmi <=24)
		cout << 2;
	else if(bmi > 24 && bmi <=29)
		cout << 3;
	else if(bmi >29)
		cout << 4;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
