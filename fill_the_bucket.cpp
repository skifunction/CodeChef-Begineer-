#include<bits/stdc++.h>
using namespace std;

int main() {

	int T;
	vector<int> fill;
	int k, x;
	cin >> T;
	while(T--){
		cin>>k>>x;
		fill.push_back(k-x);
	}
	for(auto i=fill.begin();i != fill.end(); i++)
		cout<<*i<<'\n';
	return 0;
}
