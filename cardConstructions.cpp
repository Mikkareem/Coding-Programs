#include<bits/stdc++.h>
using namespace std;

void solve()
{
	// i*(i+1) + (i*(i - 1)) /2
	//cards = i*(i+1) + (i*(i - 1)) /2
	//cards = i^2 + i + (i^2 - i)/2;
	//2*cards = 2(i^2 + i) + (i^2 - i)
	//2*cards = 2*(i^2) + 2*i + i^2 - i
	//2*cards = 3*(i^2) + i
	//2*cards = i(3*i + 1)
	int n = 25820;
	vector<int> dp(n);
	for(int i = 1; i < n; i++) {
		dp[i] = i*(i+1) + (i*(i - 1)) /2;
	}
	
	int t;
	cin >> t;
	while(t--) {
		int x, cnt = 0;
		cin >> x;
		for(int i = n - 1; i > 0; i--) {
			if(dp[i] <= x) {
				cnt++;
				x -= dp[i];
			}
		}
		cout << cnt << '\n';
	}
}

int main()
{
	//int t = 1;
	//cin >> t;
	//while(t--) {
		//solve();
		//cout << '\n';
	//}
	solve();
}
