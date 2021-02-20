#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k, additional = 0;
	cin >> n >> k;
	vector<int> a(n, k);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(i == 0) continue;
		if(a[i] + a[i-1] < k) {
			//a[i] = k - a[i-1];
			if(a[i] <= a[i - 1]) {
				additional += k - a[i - 1] - a[i];
				a[i] = k - a[i - 1];
			} else {
				additional += k - a[i] - a[i - 1];
				a[i - 1] = k - a[i];
			}
		}
	}
	cout << additional << '\n';
	for(int i = 0; i < n; i++) cout << a[i] << ' ';
}

int main()
{
	int t = 1;
	// cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
