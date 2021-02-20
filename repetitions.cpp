#include<bits/stdc++.h>
using namespace std;
//CSES.fi

void solve()
{
	string s;
	cin >> s;
	int n = s.length();
	int ans = 1, cnt = 1;
	for(int i = 0; i < n-1; i++) {
		if(s[i] == s[i+1]) cnt++;
		else cnt = 1;
		ans = max(ans, cnt);
	}
	cout << ans;
}

int main()
{
	int t = 1;
	//scanf("%d", &t);
	while(t--) {
		solve();
		puts("");
	}
}
