#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		string binary_num;
		cin >> binary_num;
		// char number[n];
		// for(int i=0; i<n; i++){
		// 	cin >> number[i];
		// }
		// cout << stoi(number, 0, 2) << endl;
		cout << stol(binary_num, nullptr, 2) << endl;

	}

	return 0;

}