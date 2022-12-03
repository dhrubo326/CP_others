#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		long long int tree[n][n];
		tree[0][0] = 1;
		for(int i=1; i<n; i++){
			tree[i][0] = 1;
			tree[i][i] = 1;
			for(int j=1; j<i; j++){
				tree[i][j] = tree[i-1][j-1] + tree[i-1][j];
			}
		}

		for(int i=0; i<n; ++i){
			for(int j=0; j<=i; ++j){
				cout << tree[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}