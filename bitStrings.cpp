#include<bits/stdc++.h>
using namespace std;
// CSES.fi
#define ll long long
#define mod 1000000007

ll binomial(ll base, ll power)
{
	ll res = 1;
	while(power) {
		if(power%2) {
			res = (res*base) % mod;
			power--;
		} else {
			base = (base*base) % mod;
			power /= 2;
		}
	}
	return res;
}

void solve()
{
	ll n;
	cin >> n;
	cout << binomial(2, n);
}

int main()
{
	int t = 1;
	// scanf("%d", &t);
	while(t--) {
		solve();
		puts("");
	}
}
