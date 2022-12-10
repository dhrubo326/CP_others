#include <bits/stdc++.h>
using namespace std;

// use two pointer tecnique here
void solve(vector<int> &V){ 
	int x = 0;
	int i = 0;
	int j = V.size()-1;
	int dif = INT_MAX;
	int index1, index2;
	while(i < j){
		int sum = V[i]+ V[j];
		if(abs(sum - x) < dif){
			dif = abs(sum - x);
			index1 = i;
			index2 = j;

			// cout << V[i] << " and "<< V[j]<<endl;
		}
		if(sum > x){
			j--;
		}else{
			i++;
		}
	}
	cout << V[index1] << " and "<< V[index2]<<endl;
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