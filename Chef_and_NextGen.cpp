#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a, b;
	int x, y;
	cin >> a >> b >> x >> y;
	if(x*y >= a*b)
		cout<<"Yes";
	else
		cout<<"No";
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
