#include <bits/stdc++.h>
using namespace std;

char upper(char c){
	return 'A' + (c - 'a');
}

char lower(char c){
	return 'a' + (c - 'A');
}

int main(){

	string word;
	cin >> word;
	for(int i=0; i < word.size(); ++i){
		if(word[i] >= 'a' &&  word[i] <= 'z'){
			word[i] = upper(word[i]);
		}else if(word[i] >= 'A' && word[i] <= 'Z'){
			word[i] = lower(word[i]);
		}
	}
	// cout << word << endl;

	int result = 0;
	for(int i=0; i < word.size(); ++i){
		if(word[i] >= 'a' &&  word[i] <= 'z'){
			result = result - word[i];
		}else if(word[i] >= 'A' && word[i] <= 'Z'){
			result = result + word[i];
		}
	}
	if(result < 0){
		result = result * -1;
	}

	// cout << result << endl;
	int flag = 1;
	for(int i = 2; i <= result/2; i++){
		if(result % i == 0){
			flag = 0;
			break;
		}
	}
	cout << flag ;

	return 0;
}