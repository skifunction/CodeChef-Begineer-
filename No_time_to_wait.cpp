#include<bits/stdc++.h>
using namespace std;

int T=1;

void solution(){
	int n, h, x, time;
	cin >> n >> h >> x;
	for(int i=0; i<n ; i++){
		cin >> time;
		if(h <= x + time){
			cout << "Yes";
			break;
		}
		else if(i == n - 1){
			cout << "No";
		}
	}
	cout << '\n';
}

int main(){
	//cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
