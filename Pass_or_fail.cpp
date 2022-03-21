#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N, X, P;
	cin >> N >> X >> P;
	if(3*X - (N - X) >= P)
		cout << "Pass";
	else
		cout << "Fail";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
