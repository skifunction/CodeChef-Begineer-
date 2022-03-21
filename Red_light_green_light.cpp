#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, k, input, count=0;
	cin >> n >> k;

	for(int i=0;i<n;i++){
		cin >> input;
		if(input > k)
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
