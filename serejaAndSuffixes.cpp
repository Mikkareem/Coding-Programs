#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> numbers(n);
	for(int& i: numbers) cin >> i;
	
	vector<int> dp(n);
	unordered_set<int> integers;
	dp[n - 1] = 1;
	integers.insert(numbers[n-1]);
	for(int i = n - 2; i >= 0; i--) {
		if(!integers.count(numbers[i])) {
			dp[i] = dp[i + 1] + 1;
			integers.insert(numbers[i]);
		} else {
			dp[i] = dp[i + 1];
		}
	}
	
	while(m--) {
		int l;
		cin >> l;
		cout << dp[l - 1] << '\n';
	}
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

//indices = 0 1 2 3 4 5 6 7
//arr     = 1 2 3 4 5 3 4 2

//d[7] = 1;
//d[6] = 2;
//d[5] = 3;
//d[4] = 4;
//d[3] = 4;
//d[2] = 4;
//d[1] = 4;
//d[0] = 5;

//l = 1 -> dp[l - 1] = dp[0] = 5
//l = 4 -> dp[l - 1] = dp[3] = 2
