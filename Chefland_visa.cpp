#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x1, y1, z1;
	int x2, y2, z2;
	cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
	if(x2 >= x1 && y2 >= y1 && z2 <= z1)
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
