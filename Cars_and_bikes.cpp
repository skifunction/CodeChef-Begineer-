#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N;
	cin >> N;
	if(N % 4 == 0)
		cout << "No";
	else 
		cout << "Yes";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
