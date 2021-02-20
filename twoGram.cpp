#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans;
	int maxi = 0;
	unordered_map<string, int> m;
	for(int i = 0; i < n - 1; i++) {
		string current = s.substr(i, 2);
		m[current]++;
		if(m[current] > maxi) {
			ans = current;
			maxi = m[current];
		}
	}
	cout << ans;
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
