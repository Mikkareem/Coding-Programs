#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	if(k == 0) {
		if(a[0] == 1) cout << -1;
		else cout << 1;
		return;
	}
	for(int i = 0; i < n; i++) {
		k--;
		while(i < n - 1 and a[i] == a[i+1]) i++, k--;
		if(k == 0) {
			cout << a[i];
			return;
		}
		if(k < 0) {
			cout << -1;
			return;
		}
	}
	cout << a[n-1];
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
