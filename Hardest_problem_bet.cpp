#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b, c;
	cin >> a >> b >> c;
	if (c <= a && c <= b)
		cout << "Alice";
	else if(b <= a && b <= c)
		cout << "Bob";
	else 
		cout << "Draw";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
