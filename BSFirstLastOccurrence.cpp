#include <bits/stdc++.h>
using namespace std;

void FO(vector<int>&A, int x){
	int left, right, mid, answer= -1;
	left = 0;
	right= A.size()-1;
	while(left <= right){
		// mid =  (left + right)/2;
		mid =  left + (right - left)/2;
		cout<< "Now mid index = " << mid<<endl;
		if(A[mid] == x){
		 cout<< "index = " << mid<<endl;
		 cout<< "Value = " << A[mid]<<endl;
		 answer = mid;
		 right = mid-1;
		 cout<< "Now right index = " << right<<endl;
		}
		else if(A[mid] < x){
			left = mid+1;
			cout<< "Now left index = " << left<<endl;
		}else{
			right = mid-1;
			cout<< "Now right(2) index = " << right<<endl;
		}
	}
	if(answer != -1){
		cout<<"First Occurence in index: "<<answer<<endl;
	}else{
		cout<<"This data is not present in this array\n";
	}
}

void LO(vector<int>&A, int x){
	int left, right, mid, answer= -1;
	left = 0;
	right= A.size()-1;
	while(left <= right){
		// mid =  (left + right)/2;
		mid =  left + (right - left)/2;
		cout<< "Now mid index = " << mid<<endl;
		if(A[mid] == x){
		 cout<< "index = " << mid<<endl;
		 cout<< "Value = " << A[mid]<<endl;
		 answer = mid;
		 left = mid+1;
		 cout<< "Now left index = " << left<<endl;
		}
		else if(A[mid] < x){
			left = mid+1;
			cout<< "Now left(2) index = " << left<<endl;
		}else{
			right = mid-1;
			cout<< "Now right index = " << right<<endl;
		}
	}
	if(answer != -1){
		cout<<"Last Occurence in index: "<<answer<<endl;
	}else{
		cout<<"This data is not present in this array\n";
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int target = 4;
	vector<int> A = {1, 1, 1, 4, 4, 4, 4, 4, 4, 12, 13, 14};
	// if need short the array
	
	// find frist occurrence 
	FO(A, target);
	// Find last occurrence
	LO(A, target);
	return 0;
}