#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n), c(n-1);
	for(int &i: a) cin >> i;
	for(int &i: b) cin >> i;
	for(int &i: c) cin >> i;
	
	int prev = -1, sum = 0;
	for(int i: a) {
		sum += b[i-1];
		if(i == prev+1) sum += c[prev-1];
		prev = i;
	}
	cout << sum;
}
