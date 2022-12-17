#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int target = 4;
	vector<int> A = {1, 2, 3, 8, 9, 10, 11, 12, 13, 14};
	int left, right, mid;
	left = 0;
	right= A.size()-1;
	int answer = -1;
	while(left <= right){
		mid =  left + (right - left)/2;
		if(A[mid] >= target){
		 cout<< "index = " << mid<<endl;
		 cout<< "Value = " << A[mid]<<endl;
		 answer = mid;
		 right = mid-1;
		}
		else{
			left = mid+1;
		}
	}
	cout <<"Nearest value on index: " << answer << endl;
	return 0;
}