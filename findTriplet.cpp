#include <bits/stdc++.h>
using namespace std;

// use two pointer tecnique here
void solve(vector<int> &V){ 
	int x = 7;
	int isFound = 0;
	int index1, index2, index3;
	for(int p = 0; p < V.size(); p++){
		int q = p+1;
		int r = V.size()-1;
		while(q < r){
			int sum = V[p]+ V[q] + V[r];
			if(sum == x){
				index1 = p;
				index2 = q;
				index3 = r;
				cout << V[p] << " - "<< V[q] <<" - "<<V[r]<<endl;
				isFound++;
			}
			if(sum > x){
				r--;
			}else{
				q++;
			}
		}
	}
	if(isFound){
		cout <<"Number of triplet: "<< isFound<<endl;	
	}else{
		cout << "No triplet found \n";
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