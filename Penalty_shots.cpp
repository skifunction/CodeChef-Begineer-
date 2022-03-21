#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, score1 = 0, score2 = 0;
	for(int i=1; i<=10;i++){
		cin >> a;
		if(i%2 == 1 && a == 1)
			score1++;
		else if(i%2 == 0 && a == 1)
			score2++;
	}
	if(score1 > score2)
		cout << 1;
	else if(score1 < score2)
		cout << 2;
	else
		cout << 0;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
