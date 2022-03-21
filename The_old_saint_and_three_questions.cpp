#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int a[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
		}
	}
	int A=0, B=0;
	for(int k=0;k<3;k++){
		A += a[0][k];
		B += a[1][k];
	}
	if(A == B)
		cout << "Pass";
	else
		cout << "Fail";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
