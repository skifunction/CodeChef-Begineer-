#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int goals;
	string team;
	unordered_map<string, int> Team_score;
	for(int i=0;i<4;i++){
		cin >> team >> goals;
		if(goals <= 20)
			Team_score[team] = goals;
	}
	if(Team_score["Barcelona"] > Team_score["Eibar"] && Team_score["RealMadrid"] < Team_score["Malaga"])
		cout << "Barcelona";
	else
		cout << "RealMadrid";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
