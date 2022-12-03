#include <bits/stdc++.h>
using namespace std;

int main(){
	string word;
	cin >> word;
	int full = word.size();
	int half = word.size()/2;
	int i , j;
	for(i = full-1, j = 0; i >= half; i--, j++){
		if(word[j] != word[i]){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
