#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, y, z;
	cin >> x >> y >> z;
	if(x + y < z)
		cout << "PLANEBUS";
	else if(x + y > z)
		cout << "TRAIN";
	else
		cout << "EQUAL";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
