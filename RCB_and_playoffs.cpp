#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y, z;
	cin >> x >> y >> z;
	if(x + 2*z >= y)
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
