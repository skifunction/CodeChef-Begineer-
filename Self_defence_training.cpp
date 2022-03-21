#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N, x, count = 0;
	cin >> N;
	while(N--){
		cin >> x;
		if(x >= 10 && x <= 60){
			count++;
		}
	}
	cout<<count;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
