#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<int> pointerVector;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int y;
		cin >> y; 
		pointerVector.push_back(y);
	}
	// sort the array
	sort(pointerVector.begin(), pointerVector.end());
	for (auto i : pointerVector){
		cout << i << " ";
	} 
	cout << "\n";
	// use two pointer tecnique here
	int i = 0;
	int j = n-1;
	while(i < j){
		int sum = pointerVector[i]+ pointerVector[j];
		if(sum == x){
			cout << pointerVector[i] << " and "<< pointerVector[j]<<endl;
			i++;
		}else if(sum > x){
			j--;
		}else{
			i++;
		}
	}

	
	return 0;
}