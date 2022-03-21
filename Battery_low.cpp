#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T, battery;	
	cin>>T;
	
	for(int i=0;i<T;i++){
		
		cin>>battery;
		if(battery<=15)
			cout<<"Yes";
		else
			cout<<"No";
		cout<<'\n';
		
	}

	return 0;
}
