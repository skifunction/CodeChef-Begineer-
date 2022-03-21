#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, a, b, c[2] = {0};

	cin >> n >> a >> b;
	int temp;

	for(int i=0;i<n;i++){
		cin >> temp;
	    if(temp == a) 
			c[0]++;
		if(temp == b) 
			c[1]++;   
	}
	
	cout << (c[0] * c[1] * 1.0) / (n * n * 1.0);

	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
