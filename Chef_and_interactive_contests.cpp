#include<bits/stdc++.h>
using namespace std;

int T;

void solution(int r){
	int rating;
	cin >> rating;
	if(rating >= r)
		cout << "Good boi";
	else
		cout << "Bad boi";	
	cout << '\n';
}

int main(){
	int r;
	cin >> T >> r;
	while(T--){
		solution(r);
	}
	return 0;
}
