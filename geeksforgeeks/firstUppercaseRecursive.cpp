#include<bits/stdc++.h>
using namespace std;

char firstUppercaseRecursive(const string& s, int index)
{
	if(index == (int)s.length()) return '0';
	
	if(isupper(s[index])) return s[index];
	
	return firstUppercaseRecursive(s, index+1);
}

int main()
{
	string s = "AbcdefghijkL";
	cout << firstUppercaseRecursive(s, 0);
}

//dfsdfgsdSdfdGdkfhsdlkf

