#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int power[3];
	for(int i=0;i<3;i++)
		cin >> power[i];
	sort(power, power + 3);
	cout << power[2] + power[1];
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
