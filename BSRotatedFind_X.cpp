#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A){
	int answer = 0;
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
	// Return the rotate index
	return answer;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int target = 14;
	vector<int> A = {13, 15, 17, 19, 20, 21, 1};
	int index = solve(A);
	cout<<"Rotated index is: "<<index<<endl;

	// Run 1st binary search operations

	int left, right, mid, notFound = 1;
	left = 0;
	right = index - 1;
	while (left <= right){
		mid = left + (right-left)/2;
		if(A[mid] == target){
			cout << "Index: "<<mid << endl;
			cout << "Value: "<<A[mid] << endl;
			notFound=0;
			break;
		}else if(A[mid] < target){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	if(notFound){
		cout<<"Welcome in 2nd BS \n";
		// 2nd Binary search 
		left = index;
		right = A.size() - 1;
		while(left <= right){
			mid = left + (right-left)/2;
			if(A[mid] == target){
				cout <<"index: "<<mid<<endl;
				cout <<"value: "<<A[mid]<<endl;
				notFound = 0;
				break;
			}else if(A[mid] < target){
				left = mid+1;
			}else{
				right = mid-1;
			}
		}
	}
	if(notFound){
		cout <<"The value is not present \n";
	}






}