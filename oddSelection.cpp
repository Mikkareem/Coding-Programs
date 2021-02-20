#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, x;
	cin >> n >> x;
	int odd = 0, even = 0;
	for(int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if(k & 1) odd++;
		else even++;
	}
	if(!odd) {
		cout << "NO";
		return;
	}
	for(int i = 1; i <= odd; i += 2) {
		if(i > x) break;
		if((x-i) <= even) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
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
