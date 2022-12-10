#include <bits/stdc++.h>
using namespace std;

// use two pointer tecnique here
// Q: Find a triplet such that sum of two equals to third element
void solve(vector<int> &V){ 
	int isFound = 0;
	int n = V.size();
	int index1, index2, index3;
	for(int p = n-1; p >=0; p--){
		int target = V[p];
		int q = 0;
		int r = p-1;
		while(q < r){
			int sum = V[q] + V[r];
			if(sum == target){
				index1 = p;
				index2 = q;
				index3 = r;
				cout << V[p] << " == "<< V[q] <<" + "<<V[r]<<endl;
				isFound++;
			}
			if(sum > target){
				r--;
				cout <<"comaichi\n";
			}else{
				q++;
				cout <<"baraichi\n";
			}
		}
	}
	if(isFound){
		cout <<"Number of case: "<< isFound<<endl;	
	}else{
		cout << "No case found \n";
	}
	
}

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
	solve(pointerVector);
	
	return 0;
}