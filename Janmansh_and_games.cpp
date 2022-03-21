#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y, token=0;
	cin >> x >> y;
	if(x % 2 == 0){
		if(y % 2 == 0)
			cout << "Janmansh";
		else
			cout << "Jay";
	}
	else{
		if(y % 2 == 0)
			cout << "Jay";
		else
			cout << " Janmansh";
	}
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
