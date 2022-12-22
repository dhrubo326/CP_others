#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int target = 4;
	vector<int> A = {1, 2, 3, 10, 10, 11, 11, 12, 13, 14};
	int left, right, mid;
	left = 0; 
	right= A.size()-1;
	int answer = -1;
	while(left <= right){
		mid =  left + (right - left)/2;
		if(A[mid] == target){
			answer = mid;	
			cout<< "exact index = " << mid<<endl;
		 	cout<< "exact value = " << A[mid]<<endl;
		 	break;	
		}
		if(A[mid] < target){
			answer = mid;
			cout<< "nearest index = " << mid<<endl;
			cout<< "nearest Value = " << A[mid]<<endl;
			left = mid+1;
		}
		else{
			cout<<"right increase, index: "<<mid+1<<endl;
			right = mid-1;
		}
	}
	cout <<"index of floor value: " << answer << endl;
	return 0;
}