/*
Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

Note:
The length of num is less than 10002 and will be ≥ k.
The given num does not contain any leading zero.
Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
Example 3:

Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.

*/


#include<bits/stdc++.h>

using namespace std;

string removeKDigits(string s, int k)
{
	int length = s.length();
	if(length == k) return "0";

	stack<char> digits;

	for(char c: s)
	{
		while(k > 0 and !digits.empty() and digits.top() > c) {
			digits.pop();
			k--;
		}

		digits.push(c);
	}

	while(k > 0 and !digits.empty())
	{
		digits.pop();
		k--;
	}

	string result = "";

	while(!digits.empty()) {
		result += digits.top();
		digits.pop();
	}

	while(result.length() > 1 and result.back() == '0') {
		result.pop_back();
	}

	reverse(result.begin(), result.end());

	return result;
}

int main()
{
	string s = "1432219";
	int k = 3;
	cout << removeKDigits(s, k);
}