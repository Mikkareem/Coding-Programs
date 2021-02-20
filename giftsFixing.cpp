#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int minia = INT_MAX, minib = INT_MAX;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		minia = min(minia, a[i]);
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];
		minib = min(minib, b[i]);
	}
	long long times = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] != minia and b[i] != minib) {
			times += max(a[i] - minia, b[i] - minib);
		} else if(b[i] != minib) {
			times += (b[i] - minib);
		} else if(a[i] != minia) {
			times += (a[i] - minia);
		}
	}
	cout << times;
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


