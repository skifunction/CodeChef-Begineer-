#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int X, Y;
	cin >> X >> Y;
	if(X < Y)
		cout<<"BIKE";
	else if(X > Y)
		cout<<"CAR";
	else
		cout<<"SAME";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
