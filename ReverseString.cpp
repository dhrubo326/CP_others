#include <bits/stdc++.h>

using namespace std;

void solve(){
	string fullLine;
	string word;
	getline(cin, fullLine);
	vector<string> my_vec;

	// reverse(fullLine.begin(), fullLine.end());
	// Reversing elements from index 3 to index 6   
    // reverse(fullLine.begin() + 3, fullLine.begin() + 6);   
	// cout << fullLine << endl;
 
	stringstream ss(fullLine);
	while(ss >> word){
		my_vec.push_back(word);
	}
	reverse(my_vec.begin(), my_vec.end());
	// for(int i = 0; i < my_vec.size(); i++){
	// 	cout << my_vec[i] << " ";
	// }
	for(const auto& i : my_vec){
		cout << i <<  " ";
	}
	cout << endl;


}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	} 
	return 0;
}