#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, input;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	cout << accumulate(v.begin() + 1, v.end(), 0);
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
