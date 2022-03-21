#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int score[3];
	for(int i=0;i<3;i++)
		cin >> score[i];
	sort(score, score + 3);
	if(score[2] == score[1] + score[0])
		cout << "Yes";
	else
		cout << "No";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
