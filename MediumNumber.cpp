#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while (t--){
		int n1, n2, n3, temp;
		cin >> n1 >> n2 >> n3;
		if(n1 > n2){
			temp = n1;
			n1= n2;
			n2= temp;
		}
		if(n1 > n3){
			temp = n1;
			n1= n3;
			n3= temp;
		}
		if(n2 > n3){
			temp = n2;
			n2= n3;
			n3= temp;
		}
		cout <<  n2  << "\n";
		
	}


	return 0;
}