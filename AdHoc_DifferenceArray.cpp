#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	/* Q: You have an array, run query n time in a given range
	 	and add the value. finally print the result array */
	// print the final array; 
	vector<int> A = {2, 4, 6, 8, 10, 12, 14, 16};

	//Solution
	int size = A.size();
	// initialization with zero and size = size+1
	vector<int> diff(size+1, 0);
	// take input
	int query;
	cin >>  query;
	while(query--){
		int start, end, value;
		cin >>start>>end>>value;
		/* add value in start index
			 and subtract value from end+1 index*/
		diff[start] += value;
		diff[end+1] -= value;
	}
	for(auto i: diff){cout << i <<" ";}
	cout<<"\n";
	// Prefix sum in difference array, from index 1
	for(int i=1; i<size; i++){diff[i] += diff[i-1];}
	for(auto i: diff){cout << i <<" ";}
	cout<<"\n";
	// Sum main arry with difference array and pritn. that's it
	for(int i=0; i<size; i++){A[i] += diff[i];}
	for(auto i: A){cout << i <<" ";}


	return 0;
}