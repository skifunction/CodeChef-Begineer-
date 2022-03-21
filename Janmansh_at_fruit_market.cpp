#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int x, a[3], sum;
	cin >> x;
	for(int i=0;i<3;i++)
		cin >> a[i];
	sort(a, a + 3);
	sum = a[0] + a[1];
	x -=2;
	if(x>0){
		sum += x * a[0];
	}
	cout << sum;
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
