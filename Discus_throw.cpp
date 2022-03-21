#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b, c;
	cin >> a >> b >> c;
	if(a >= b && a >= c)
		cout<<a;
	else if(b >= a && b >= c)
		cout<<b;
	else
		cout<<c;
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
