#include<bits/stdc++.h>
using namespace std;

#define ll long long
int T;

void solution(){
	ll p;
	int a[12], count = 0, counter = 0;
	cin >> p;
	while(p>2048){
		p -= 2048;
		count++;
	}
	while(p){
		a[counter] = p % 2;
		p /= 2;
		counter++;
	}
	for(int i = counter - 1; i >= 0; i--){
		if(a[i] == 1){
			count++;
		}
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
