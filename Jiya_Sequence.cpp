#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long int sequence[n];
		for(int i=0; i<n; i++){
			cin >> sequence[i];
		}
		long long multiply = 1;
		for(int i=0; i<n; i++){
			multiply = multiply * sequence[i];
		}
		// cout << multiply << endl;
		multiply = multiply % 10;
		// cout << multiply << endl;
		if(multiply == 2 || multiply == 3 || multiply == 5){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}