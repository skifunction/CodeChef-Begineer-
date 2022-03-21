#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, x, y;
	cin >> n >> x >> y;
	n++;
	n *= y;
	if(n >= x)
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
