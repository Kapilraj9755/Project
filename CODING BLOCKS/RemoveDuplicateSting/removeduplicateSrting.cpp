#include <bits/stdc++.h>
using namespace std;

string removeduplicates(string s){
	int n = s.length();
	string ans = "";

	ans = ans + s[0];

	char first = s[0];
	for(int i = 1;i<n;i++){
		// ch is the current character
		char ch = s[i];
		/* if already included character is different from our 
		current character then add current character to the ans
		and assign current character to included character */
		if(ch != first){
			ans = ans + s[i];
			first = s[i];
		}       
	}
	return ans;
}

int main() {
	string s1 ;

	cin >>s1;
	
	cout<< removeduplicates(s1) << endl;
}



/* 
input aabbccbb

output abcb

*/