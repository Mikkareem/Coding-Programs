#include<bits/stdc++.h>
using namespace std;

void testcase()
{
	int n, maxi = INT_MIN;
	scanf("%d", &n);
	long long c[100001] = {0};
	vector<int> in(n);
	vector<long long> dp(100001, 0); // dp[i] -> max points upto the number i.
	// Recurrence -> f(i) = max(f(i-1), c[i]*i + f(i-2))
	// Answer -> f(maximum number in the array)
	for(int &i: in) {
		cin >> i;
		c[i]++;
		maxi = max(maxi, i);
	}
	dp[0] = 0;
	dp[1] = c[1];
	for(int i=2; i<=maxi; i++) {
		dp[i] = max(dp[i-1], dp[i-2] + (c[i]*i));
	}
	cout << dp[maxi];
}

int main()
{
	int t = 1;
	//scanf("%d", &t);
	while(t--) {
		testcase();
		puts("");
	}
}
