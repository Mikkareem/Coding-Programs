#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	for(int i = 0; i < n; i++) {
		if(i%2==0) {
			if(s[i] == 'L') {
				puts("No");
				return 0;
			}
		} else {
			if(s[i] == 'R') {
				puts("No");
				return 0;
			}
		}
	}
	puts("Yes");
}
