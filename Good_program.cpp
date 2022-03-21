#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int N;
	cin >> N;
	if(N%4 == 0)
		cout<<"Good";
	else
		cout<<"Not Good";
	cout<<'\n';

}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
