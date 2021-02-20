#include<bits/stdc++.h>
using namespace std;
//CSES.fi

void solve()
{
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	long long ans = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(i != 0) {
			if(a[i] < a[i-1]) {
				ans += a[i-1]-a[i];
				a[i] = a[i-1];
			}
		}
	}
	cout << ans;
}

int main()
{
	int t = 1;
	//scanf("%d", &t);
	while(t--) {
		solve();
		puts("");
	}
}
