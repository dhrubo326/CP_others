#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int answer = 0;
	vector<int> A = {13, 15, 17, 19, 20, 21, 22, 23, 1, 2, 4, 6};
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
			answer = mid;
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