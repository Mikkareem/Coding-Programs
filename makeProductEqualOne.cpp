#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int negative = 0, zeros = 0;
	long long coins = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x < 0) coins += (-1 - x), negative++;
		else if(x > 0) coins += (x - 1);
		else coins += 1, zeros++;
	}
	
	if(negative % 2 and !zeros) coins += 2;
	
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
