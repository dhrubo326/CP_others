#include <bits/stdc++.h>
using namespace std;

int main(){
	int rend, your;
	cin >> your;
	// ou need to give the randum number generator a seed. 
	// This can be done by taking the current time, as this is hopefully some kind of random.
	srand(time(0));
	// srand ( time(NULL) );
	rend =  rand() % 4 + 1;
	cout << rend << endl;
	if (rend == your)
	{
		cout << "Winn! " << endl;

	}else{
		cout << "Wrong" << endl;
	}
	return 0;
}