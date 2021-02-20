#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll base, ll p)
{
	ll res = 1;
	while(p) {
		if(p % 2) {
			res *= base;
			p--;
		} else {
			base *= base;
			p /= 2;
		}
	}
	return res;
}

ll calc(ll x, ll n, ll curr) {
	if(power(curr,n) == x) return 1;
	
	if(power(curr, n) < x) {
		return calc(x, n, curr+1) + calc(x-power(curr, n), n, curr+1);
	} else {
		return 0;
	}
}

void test_case()
{
	ll x, n;
	scanf("%lld%lld", &x, &n);
	
	cout << calc(x, n, 1);
}

int main()
{
	int t = 1;
	//cin >> t;
	while(t--) {
		test_case();
		puts("");
	}
}
