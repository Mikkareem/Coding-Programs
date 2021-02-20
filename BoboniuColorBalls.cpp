#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int odd = 0, even = 0, a, b, c, d;
	cin >> a >> b >> c >> d;
	odd += (a%2 + b%2 + c%2 + d%2);
	even = 4-odd;
	if(a == 0 or b == 0 or c == 0) {
		if(odd == 1 or odd == 0) puts("Yes");
		else puts("No");
	} else {
		if(even == 0 or even == 1 or odd == 0 or odd == 1) puts("Yes");
		else puts("No");
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		//printf("Case #%d: ", i);
		solve();
		cout << '\n';
	}
}
