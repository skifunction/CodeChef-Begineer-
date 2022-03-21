#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, a, b;
	cin >> x >> a >> b;
	if(a + 2*b >= x)
		cout<<"Qualify";
	else
		cout<<"NotQualify";
	cout<<'\n';

}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
