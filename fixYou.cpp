#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(i < n - 1) {
			cnt += (s[m-1] != 'D');
		} else {
			for(int j = 0; j < m-1; j++) {
				cnt += (s[j] != 'R');
			}
		}
	}
	cout << cnt;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
