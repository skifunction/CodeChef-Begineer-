#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b, coins[2];
	cin >> b >> a >> coins[0] >> coins[1];
	for(int i=0;i<2;i++){
		if(max(a, b) == a){
			if(a != b)
				b += coins[i];
			else
				a += coins[i];
		}
		else
			a += coins[i];
	}
	if(a > b)
		cout << 'S';
	else
		cout << 'N';
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
