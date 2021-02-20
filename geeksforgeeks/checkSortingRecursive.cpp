#include<bits/stdc++.h>
using namespace std;

bool checkAsc(const vector<int>& a, int index)
{
	if(index == a.size() - 1) return true;
	
	// Check for first 2 numbers, if true, recursively check next 2.
	return (a[index] < a[index+1]) && checkAsc(a, index + 1);
}

int main()
{
	vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << checkAsc(a, 0);
}

