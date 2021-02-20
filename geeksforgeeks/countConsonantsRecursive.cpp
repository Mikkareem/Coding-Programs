#include<bits/stdc++.h>
using namespace std;

bool isConsonant(char a)
{
	a = toupper(a);
	return a != 'A' && a != 'E' && a != 'I' && a != 'O' && a != 'U';
}

int totalConsonants(const string& s, int n)
{
	if(n == 0) return 0;
	
	return isConsonant(s[n-1]) + totalConsonants(s, n-1);
}

int main()
{
	string s = "abcdefghijkl";
	cout << totalConsonants(s, s.length());
}

