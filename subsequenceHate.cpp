#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int n = s.length();
	int ones = 0, zeros = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1') ones++;
		else zeros++;
	}
	int ans = min(ones, zeros);
	int current_0 = 0, current_1 = 0, remaining_0 = 0, remaining_1 = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1') current_1++;
		else current_0++;
		
		//till i-th position 1, all other 0
		remaining_1 = ones - current_1;
		ans = min(ans, remaining_1 + current_0);
		
		//till i-th position 0, all other 1
		remaining_0 = zeros - current_0;
		ans = min(ans, remaining_0 + current_1);
	}
	cout << ans;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}

//s = 1011 010001001000
//		 ^
//		 i
//ones = 6
//zeros = 10
//current_0 = 1
//current_1 = 3
//remaining_0 = 9
//remaining_1 = 3

//if s is a binary string of length n.
//n = 6

//The Possible answers are.
//"000000" "111111"
//"100000" "011111"
//"110000" "001111"
//"111000" "000111"
//"111100" "000011"
//"111110" "000001"
