#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int term = 1, sum = 0;
	
	while(sum < n) {
		sum += term;
		term++;
	}
	
	if(sum == n) cout << term - 1 << '\n';
	else cout << term - 2 << '\n';
		
	for(int i = 1; i < term; i++) {
		if(sum == n) {
			cout << i << ' ';
		} else {
			if(i == sum - n) continue;
			cout << i << ' ';
		}
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
