#include<bits/stdc++.h>
using namespace std;

int T;

int check(int a){
	int value;
	if(a == 0)
		value = 6;
	else if(a == 1)
		value = 2;
	else if(a == 2 || a == 3 || a == 5)
		value = 5;
	else if(a == 4)
		value = 4;
	else if(a == 6)
		value = 6;
	else if(a == 7)
		value = 3;
	else if(a == 8)
		value = 7;
	else if(a == 9)
		value = 6;
	return value;
}

void solution(){
	int a, b, sum = 0;
	cin >> a >> b;
	a += b;
	while(a){
		b = a % 10;
		sum += check(b);
		a /= 10;
	}
	cout << sum;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
