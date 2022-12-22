#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int target = 12;
	vector<int> A = {3, 1, 7, 5, 9, 10, 15, 12, 20, 18, 30};
	int left, right, mid, answer= -1;
	left = 0;
	right= A.size()-1;
	while(left <= right){
		mid =  left + (right - left)/2;
		if(A[mid] == target){
		 cout<< "index = " << mid<<endl;
		 cout<< "Value = " << A[mid]<<endl;
		 answer = mid;
		 break;
		}else if(left <= mid-1 && A[mid-1] == target){
			cout<< "index(mid-1) = " << mid-1<<endl;
		 	cout<< "Value(mid-1) = " << A[mid-1]<<endl;
			answer = mid-1;
			break;

		}else if(right >= mid+1 && A[mid+1] == target){
			cout<< "index(mid+1) = " << mid+1<<endl;
		 	cout<< "Value(mid+1) = " << A[mid+1]<<endl;
			answer =  mid+1;
			break;
		}
		
		if(A[mid] < target){
			left = mid+2;
		}else{
			right = mid-2;
		}
	}
	cout <<"Target index is: "<<  answer<<endl;
	return 0;
}