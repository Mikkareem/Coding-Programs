#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	if(n & 1) cout << 0;
	else cout << (1 << (n/2));
}

int main()
{
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
