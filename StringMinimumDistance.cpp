#include <bits/stdc++.h>

using namespace std;

void solve(){
	vector<string> s = { "geeks", "quick", "geeks", "fox", "practice" };
	string word1 = "practice", word2 = "geeks";

	int d1 = -1, d2 = -1;
    int ans = INT_MAX;
 
    // Traverse the string
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == word1)
            d1 = i;
        if (s[i] == word2)
            d2 = i;
        if (d1 != -1 && d2 != -1)
            ans = min(ans, abs(d1 - d2));
            // ans = abs(d1 - d2);
    }
 
    // Return the answer
    cout << ans << endl;

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