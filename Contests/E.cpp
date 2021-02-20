#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<int> pref(n), suff(n);
	// pref[i] -> #of distinct characters in the prefix of length i
	// suff[i] -> #of distinct characters in the suffix of length i
	// 1<=i<n (non-empty lengths)
	unordered_set<char> distinct;
	
	for(int i = 0; i < n-1; i++) {
		distinct.insert(s[i]);
		pref[i+1] = (int)distinct.size();
	}
	distinct.clear();
	
	for(int i = n-1; i > 0; i--) {
		distinct.insert(s[i]);
		suff[n-i] = (int)distinct.size();
	}
	
	int cnt = 0;
	for(int i = 1; i < n; i++) {
		if(pref[i] == suff[n-i]) cnt++;
	}
	
	cout << cnt;
}

// abacbaba -> 0
// a bacbaba -> 1 3
// ab acbaba -> 2 3
// aba cbaba -> 2 3
// abac baba -> 3 2
// abacb aba -> 3 2
// abacba ba -> 3 2
// abacbab a -> 3 1

// abccbaabc -> 4
// a bccbaabc -> 1 3
// ab ccbaabc -> 2 3
// abc cbaabc -> 3 3
// abcc baabc -> 3 3
// abccb aabc -> 3 3
// abccba abc -> 3 3
// abccbaa bc -> 3 2
// abccbaab c -> 3 1

// aaaaa -> 4
// a aaaa -> 1 1
// aa aaa -> 1 1
// aaa aa -> 1 1
// aaaa a -> 1 1
