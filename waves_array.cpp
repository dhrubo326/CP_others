#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	#endif
	int size = 8;
	int arr[size] = {10, 5, 6, 3, 2, 20, 100, 80};
	// int size = 6;
	// int arr[size] = {20, 10, 8, 6, 4, 2};

	int temp;
	for(int i = 0; i<size-1; i++) {
      if(i % 2 == 0){
      	if(arr[i] < arr[i+1]){
      		temp = arr[i];
      		arr[i] = arr[i+1];
      		arr[i+1] = temp;
      	}
      }else{
      	if(arr[i] > arr[i+1]){
      		temp = arr[i];
      		arr[i] = arr[i+1];
      		arr[i+1] = temp;
      	}
      }
   }

   for (int i=0; i<size; ++i){
		cout << arr[i] << " ";
   }
   
	return 0;
}