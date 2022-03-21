#include<bits/stdc++.h>
using namespace std;

int T=1;

void solution(){
	int N;
	cin >> N;
	for(int i=10; i >= 1;i--){
		if(N % i == 0){
			cout << i;
			break;
		}
	}
	cout<<'\n';
}

int main(){
	//cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
