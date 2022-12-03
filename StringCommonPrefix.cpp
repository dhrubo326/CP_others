#include <bits/stdc++.h>

using namespace std;

void solve(){
	vector<string> my_vec;
	string fullLine;
	string word;
	getline(cin, fullLine);
	stringstream ss(fullLine);
	while(ss >> word){
		my_vec.push_back(word);
	}
	if (my_vec.size() == 0)
        // return "";
        cout << "" << endl;
    if (my_vec.size() == 1)
        // return my_vec[0];
        cout << my_vec[0] << endl;
    // sort the vector
    sort(my_vec.begin(), my_vec.end());
    
    // Find the minimum length from first and last string
    int n = my_vec.size();
    int minLen = min(my_vec[0].size(), my_vec[n - 1].size());
    // Now the common prefix in first and
    // last string is the longest common prefix
    string first = my_vec[0], last = my_vec[n - 1];
    int count = 0;
    while(count < minLen && first[count] == last[count]){
    	count++;
    }
    // output longest prefix
    string prefix = first.substr(0, count);

	cout << minLen << endl;
	cout << first << endl;
	cout << last << endl;
	cout << count << endl;
	cout << prefix << endl;


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