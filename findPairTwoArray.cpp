#include <bits/stdc++.h>
using namespace std;

// use two pointer tecnique here
void solve(vector<int> &V1, vector<int> &V2){ 
	int x = 0;
	int i = 0;
	int j = V2.size()-1;
	int dif = INT_MAX;
	int index1, index2;
	while(i < V1.size() && j >= 0){
		int sum = V1[i]+ V2[j];
		if(abs(sum - x) < dif){
			dif = abs(sum - x);
			index1 = i;
			index2 = j;

			cout << V1[i] << " and "<< V2[j]<<endl;
		}
		if(sum > x){
			j--;
			cout <<" j loop "<<endl;
		}else{
			i++;
			cout <<" i loop "<<endl;
		}
	}
	// final result 
	// cout << V1[index1] << " and "<< V2[index2]<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<int> vector1, vector2;
	int n1;
	cin >> n1;
	for(int i=0; i<n1; i++){
		int y;
		cin >> y; 
		vector1.push_back(y);
	}
	int n2;
	cin >> n2;
	for(int i=0; i<n2; i++){
		int y;
		cin >> y; 
		vector2.push_back(y);
	}
	// sort the array
	sort(vector1.begin(), vector1.end());
	sort(vector2.begin(), vector2.end());
	for (auto i : vector1){
		cout << i << " ";
	} 
	cout << "\n";
	for (auto i : vector2){
		cout << i << " ";
	} 
	cout << "\n";
	solve(vector1, vector2);
	
	return 0;
}