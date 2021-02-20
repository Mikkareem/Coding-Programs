#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int N, K;
	scanf("%d%d", &N, &K);
	int best = INT_MAX, ans = -1;
	for(int i = 0; i < N; i++) {
		int s;
		scanf("%d", &s);
		if(K % s == 0 and best > K/s) {
			best = K/s;
			ans = s;
		}
	}
	printf("%d", ans);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		//printf("Case #%d: ", i);
		solve();
		cout << '\n';
	}
}
