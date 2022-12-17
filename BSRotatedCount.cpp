#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int answer = 0;
	vector<int> A = {13, 15, 17, 19, 20, 1, 2, 3, 3, 4, 4};
	int left, right, mid;
	left = 0;
	right = A.size()-1;
	while(left <= right){
		// mid = (left + right) / 2;
		mid =  left + (right - left)/2;

		if(mid < right && A[mid] > A[mid+1]){
			answer = mid+1;
			break;
		}
		else if(mid > left && A[mid] < A[mid-1]){
			answer = mid-1;
			break;
		}

		// BS basic operation
		if(A[right] > A[mid]){
			right = mid-1;
		}else{
			left = mid+1;
		}
	}

	cout <<"Number of rotation: " << answer <<endl;
}