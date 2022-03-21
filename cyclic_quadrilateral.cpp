#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a + c) == (b + d) && a + c == 180)
		cout << "Yes";
	else
		cout << "No";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
