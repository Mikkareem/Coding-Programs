#include<bits/stdc++.h>
using namespace std;

bool isValid(int num)
{
	int sum = 0;
	while(num) {
		sum += num%10;
		num /= 10;
	}
	return sum == 10;
}

void solve()
{
	int k;
	cin >> k;
	long long ans = 9;
	while(k) {
		ans += 9;
		if(isValid(ans+1)) {
			k--;
			//cout << ans + 1 << '\n';
		}
	}
	cout << ans + 1;
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
