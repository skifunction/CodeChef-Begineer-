#include<bits/stdc++.h>
using namespace std;

int T;

void solution(){
	int i;
	cin >> i;
    int count=0;
    for(int j=i;j>0;){
        if(j%10==4){
            count=count+1;
        }
        j=j/10;
    }
    cout << count;	
	cout<<'\n';
}

int main(){
	cin >> T;
	while(T--){
		solution();
	}
	return 0;
}
