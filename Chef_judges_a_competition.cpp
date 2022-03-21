#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int n, count=0, sum_a = 0, sum_b = 0;
	cin >> n;
	int a[n], b[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + n);
	sum_a = accumulate(a, a + n - 1, 0);
	sum_b = accumulate(b, b + n - 1, 0);
	if(sum_a > sum_b)
		cout << "Bob";
	else if(sum_a < sum_b)
		cout << "Alice";
	else
		cout << "Draw";
	cout << '\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
