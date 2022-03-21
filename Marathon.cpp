#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int D, d, a, b, c;
	cin >> D >> d >> a >> b >> c;
	d *= D;
	if(d >= 42)
		cout << c;
	else if(d >= 21)
	   cout << b;
	else if(d >= 10)
		cout << a;
	else
		cout << 0;	
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
