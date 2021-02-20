#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int N, K;
	scanf("%d%d", &N, &K);
	string result;
	for(int i = 0; i < N; i++) {
		int x;
		scanf("%d", &x);
		if(x % K == 0) {
			result += '1';
		} else {
			result += '0';
		}
	}
	cout << result;
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
