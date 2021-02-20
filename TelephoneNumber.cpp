#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, ans = -1;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < n; i++) {
		if(s[i] == '8') {
			ans = i;
			break;
		}
	}
	if(ans == -1) {
		puts("NO");
		return;
	}
	if(n-ans >= 11) {
		puts("YES");
	} else {
		puts("NO");
	}
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
