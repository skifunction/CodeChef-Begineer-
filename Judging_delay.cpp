#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, s, j, count = 0;
	cin >> n;
	while(n--){
		cin >> s >> j;
		if(j - s > 5)
			count++;
	}
	cout << count;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
