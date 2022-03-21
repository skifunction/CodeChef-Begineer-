#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, k, inp;
	cin >> n >> k;
	int dis = 0; //discount
	for(int i=0; i<n ; i++){
		cin >> inp;
		if(inp > k)
			dis += inp - k;
	}
	cout << dis;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
