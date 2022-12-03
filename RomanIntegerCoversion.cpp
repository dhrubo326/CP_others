#include <bits/stdc++.h>

using namespace std;

void romanToDecimal(){
	string str;
	cin >> str;

	 map<char, int> m;
    m.insert({ 'I', 1 });
    m.insert({ 'V', 5 });
    m.insert({ 'X', 10 });
    m.insert({ 'L', 50 });
    m.insert({ 'C', 100 });
    m.insert({ 'D', 500 });
    m.insert({ 'M', 1000 });

    int sum = 0;
    for (int i = 0; i < str.length(); i++){
    	/*If present value is less than next value,
          subtract present from next value and add the
          resultant to the sum variable.*/
    	if(m[str[i]] < m[str[i + 1]]){
    		sum += m[str[i+1]]-m[str[i]];
    		i++;
    		continue;
    	}
    	sum += m[str[i]];
    }

    cout << sum << endl;
}

void intToRoman(){
	int number;
	cin >> number;
	  int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    int i=12;   
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        cout<<sym[i];
      }
      i--;
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
	// cin.ignore();
	while(t--){
		// romanToDecimal();
		intToRoman();
	} 
	return 0;
}