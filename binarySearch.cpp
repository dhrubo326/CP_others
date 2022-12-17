#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int x = 11;
	vector<int> A = {1, 3, 5, 7, 9, 10, 11, 12, 13, 14};
	int left, right, mid, notFound=1;
	left = 0;
	right= A.size()-1;
	while(left <= right){
		// mid =  (left + right)/2;
		mid =  left + (right - left)/2;
		if(A[mid] == x){
		 cout<< "index = " << mid<<endl;
		 cout<< "Value = " << A[mid]<<endl;
		 notFound=0;
		 break;
		}
		else if(A[mid] < x){
			left = mid+1;
		}else{
			right = mid-1;
		}
	}
	if(notFound) cout<<"This value is not preset in this array";
	return 0;
}