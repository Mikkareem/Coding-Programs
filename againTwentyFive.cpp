#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long n;
	cin >> n;
	cout << 25;
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

/*
 * 
 * 
 * The answer is 5^n mod 100.

According to modular arithmetic,

(a.b) mod c = ((a mod c).(b mod c)) mod c

so,
5^n mod 100 = ((5^(n-1) mod 100) . 5) mod 100

Let's note that 5^2 = 25

5^3 mod 100 = ((5^2 mod 100) . 5) mod 100 = (25 . 5) mod 100 = 25

5^4 mod 100 = ((5^3 mod 100) . 5) mod 100 = (25 . 5) mod 100 = 25


*/
