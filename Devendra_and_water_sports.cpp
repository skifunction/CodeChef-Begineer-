#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int z, y, a, b, c;
	cin >> z >> y >> a >> b >> c;
	z = z - y; // Remaining money
	a = a + b + c; // Total cost of water sports
	if(z >= a)
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
