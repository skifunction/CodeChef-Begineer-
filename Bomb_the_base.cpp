#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, power, temp;
	cin >> n >> power;
	temp = power;
	int house[n];

	for(int i=1;i<=n;i++)
		cin >> house[i];
	
	power = temp;

	for(int i=n; i>0; i--){
		if(house[i] < power){
			cout << i;
			break;
		}
		if(i == 1)
			cout << 0;
	}
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
