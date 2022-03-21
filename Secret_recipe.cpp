#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	float x1, x2, x3, v1, v2;
	cin >> x1 >> x2 >> x3 >> v1 >> v2;
	x1 = abs(x1 - x3) / v1;
	x2 = abs(x2 - x3) / v2;
	if(x1 > x2)
		cout << "Chef";
	else if(x1 < x2)
		cout << "Kefa";
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
