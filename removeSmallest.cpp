#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n - 1; i++) {
		if(abs(a[i] - a[i+1]) > 1) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
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

