#include<bits/stdc++.h>
using namespace std;

int T;

int solution(int M, int K){
	int Q, intake, sum = 0;
	for(int i=0; i<K; i++){
		cin >> intake;
		sum += intake;
	}
	cin >> Q;
	if(sum >= M && Q <= 10){
		return 1;
	}
	else
		return 0;
}

int main(){
	int M, K, Qual=0;
	cin >> T >> M >> K;
	while(T--){
		Qual += solution(M, K);
	}
	cout << Qual;
	return 0;
}
