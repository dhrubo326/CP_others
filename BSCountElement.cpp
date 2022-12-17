#include <bits/stdc++.h>
using namespace std;

int FO(vector<int>&A, int x){
	int left, right, mid, answer= -1;
	left = 0;
	right= A.size()-1;
	while(left <= right){
		// mid =  (left + right)/2;
		mid =  left + (right - left)/2;
		if(A[mid] == x){
		 cout<< "index(fo) = " << mid<<endl;
		 cout<< "Value(fo) = " << A[mid]<<endl;
		 answer = mid;
		 right = mid-1;
		}
		else if(A[mid] < x){
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	if(answer != -1){
		return answer;
	}else{
		// cout<<"This data is not present in this array\n";
		return 0;
	}
}

int LO(vector<int>&A, int x){
	int left, right, mid, answer= -1;
	left = 0;
	right= A.size()-1;
	while(left <= right){
		// mid =  (left + right)/2;
		mid =  left + (right - left)/2;
		if(A[mid] == x){
		 cout<< "index(lo) = " << mid<<endl;
		 cout<< "Value(lo) = " << A[mid]<<endl;
		 answer = mid;
		 left = mid+1;
		}
		else if(A[mid] < x){
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	if(answer != -1){
		return answer;
	}else{
		// cout<<"This data is not present in this array\n";
		return 0;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int target = 16;
	vector<int> A = {1, 1, 1, 4, 4, 4, 4, 4, 4, 12, 13, 13, 14};
	// if need short the array
	
	// find frist occurrence 
	int f =  FO(A, target);
	// Find last occurrence
	int l = LO(A, target);
	//cout the element

	if(f && l){
		cout << l-f+1<<endl;
	}else{
		cout<<"This element not present\n";
	}
	
	return 0;
}