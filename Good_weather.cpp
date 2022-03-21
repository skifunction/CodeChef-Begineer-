#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int day, count=0;
	for(int i=0;i<7;i++){
		cin >> day;
		if(day == 1)
			count++;
	}
	if(count>3)
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
