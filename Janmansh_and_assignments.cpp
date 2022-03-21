#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x;
	cin >> x;
	if(x+3 <= 10)
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
