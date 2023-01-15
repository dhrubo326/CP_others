#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	// Q: find the total sum in a given range (start, end)
	vector<int> A = {2, 4, 6, 8, 10, 12, 14, 16};
	int start = 2, end = 5;
	//Solution
	int size = A.size();
	vector<int> prefixSum(size);
	prefixSum[0] = A[0];

	for (int i = 1; i<size; ++i){
		prefixSum[i] = prefixSum[i-1] + A[i];
	}
	for(auto n : prefixSum){
		cout << n << " ";
	}
	cout <<"\n";
	// Print the sum in given range 
	if(start == 0){
		cout <<  prefixSum[end];
	}else{
		cout <<  prefixSum[end] - prefixSum[start-1];
	}
	return 0;
}