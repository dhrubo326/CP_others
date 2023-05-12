#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&Arr, int K){
	int windowSum = 0, maxSum = 0;
	for(int i = 0; i<K; i++){
		windowSum += Arr[i];
	}
	for(int end = K; end< Arr.size(); end++){
		windowSum += Arr[end]- Arr[end-K];
		maxSum = max(maxSum, windowSum);
	}
	return maxSum;
}
int maxSubarraySum(vector<int>&arr, int k) {
    int maxSum = INT_MIN;
    int windowSum = 0;
    int start = 0;
    
    for (int end = 0; end < arr.size(); end++) {
        windowSum += arr[end];
        
        if (end >= k - 1) {  // if window size == k
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[start];
            start++;
        }
    }
    
    return maxSum;
}


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<int> Array = {100, 200, 300, 250};
	int K=2;
	// sort the array
	// sort(Array.begin(), Array.end());
	cout<< maxSubarraySum(Array, K)<<endl;
	cout<< solve(Array, K)<<endl;
	
	return 0;
}