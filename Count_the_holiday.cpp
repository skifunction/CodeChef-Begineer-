#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, count = 8;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if((a[i]-6)%7 == 0 || a[i]%7 == 0)
			continue;
		count++;
	}
	cout << count;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
