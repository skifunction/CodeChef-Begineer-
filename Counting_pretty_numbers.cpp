#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int L, R, count = 0;
	cin >> L >> R;
	for(int i = L; i <= R; i++){
		if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
			count++;
	}
	cout << count;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
