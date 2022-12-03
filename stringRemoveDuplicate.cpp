#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s1;
    cin >> s1 ;
    int n = s1.size();
    unordered_set<char> my_set;
    for(int i=0; i< s1.size(); i++){
        my_set.insert(s1[i]);
    }
    for(auto& str: my_set){
        cout << str;
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
	while(t--){
		solve();
	} 
	return 0;
}