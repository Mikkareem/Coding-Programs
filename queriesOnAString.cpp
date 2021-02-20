#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int m;
	cin >> m;
	while(m--) {
		int L, R, k;
		cin >> L >> R >> k;
		s = s.substr(0, L-1) + s.substr(R-k+1-1, k) + s.substr(L-1, R-L+1-k) + s.substr(R);
	}
	cout << s;
}
// length = r-l+1
// k %= length
// s = s.substr(0, l-1) + s.substr(r-k+1-1, k) + s.substr(l-1, r-l+1-k) + s.substr(r)
int main()
{
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
