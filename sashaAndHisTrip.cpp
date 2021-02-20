#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, v;
	cin >> n >> v;
	
	int coins = min(v, n-1);
	
	int current_city = 1;
	
	while(true) {
		if(current_city + v >= n) break;
		current_city++;
		coins += current_city;
	}
	
	cout << coins;
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
