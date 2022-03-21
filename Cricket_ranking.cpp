#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int player[2][3], best = 0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin >> player[i][j];
		}
	}
	for(int j = 0; j<3; j++){
		if(player[0][j] > player[1][j])
			best++;
		else
			best--;
	}
	if(best > 0)
		cout << 'A';
	else
		cout << 'B';
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
