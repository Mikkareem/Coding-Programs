// Problem Statement:
// Given a string S of length N, and also you are given an integer K,

// You need to tell whether the string is "K-Periodic String"

// Note:
// The string is said to be "k-Periodic String", if the k-sized initial substring(s[0]...s[k-1])
// is occuring as a period
// For example 
// 1. "aaaaaa" is 1-Periodic String.
// 2. "fgfgfgfgfgfgfg" is 2-Periodic String.
// 3. "dfdfdfd" and "werwerwrwer" are not a k-Periodic String.

// Constraints:
// 1<=N<=10^5
// |S|=N
// 1<=k<=N

// Input:
// 64 4
// abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd

// Output:
// YES


// Input:
// 63 4
// abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdbcdabcdabcdabcd

// Output:
// NO

#include<bits/stdc++.h>
using namespace std;

#define deb(x) cerr<<"["#x<<" : "<<x<<" ]\n";

int main()
{
	int	n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if(n%k) {
		puts("NO");
		return 0;
	}
	
	vector<int> p(k);
	
	for(int i = 0; i < k; i++) p[i] = s[i];
	
	for(int i = k; i < n; i++) {
		if(s[i] != p[i%k]) {
			puts("NO");
			return 0;
		}
	}
	puts("YES");
}
