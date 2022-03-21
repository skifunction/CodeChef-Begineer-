#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int input, count = 0;
	for(int i=0; i<5 ; i++){
		cin >> input;
		if(input == 1)
			count++;
	}
	if(count == 0)
		cout << "Beginner";
	else if(count == 1)
		cout << "Junior Developer";
	else if(count == 2)
		cout << "Middle Developer";
	else if(count == 3)
		cout << "Senior Developer";
	else if(count == 4)
		cout << "Hacker";
	else
		cout << "Jeff Dean";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
