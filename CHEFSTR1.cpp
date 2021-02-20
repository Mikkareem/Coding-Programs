#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	long long diff = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(i != 0) {
			diff += abs(a[i] - a[i-1]) - 1;
		}
	}
	cout << diff;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		//printf("Case #%d: ", i);
		solve();
		cout << '\n';
	}
}
