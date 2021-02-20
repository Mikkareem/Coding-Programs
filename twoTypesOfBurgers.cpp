#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int b, p, f;
	cin >> b >> p >> f;
	int h, c;
	cin >> h >> c;
	if(b < 2) {
		cout << 0;
		return;
	}
	int max_product = b/2;
	if(max_product >= p + f) {
		cout << p*h + f*c;
		return;
	}
	int first_ans = 0, m1 = max_product;
	first_ans += min(m1*h, p*h);
	m1 -= min(m1, p);
	if(m1 > 0) {
		first_ans += min(m1*c, f*c);
	}
	int second_ans = 0, m2 = max_product;
	second_ans += min(m2*c, f*c);
	m2 -= min(m2, f);
	if(m2 > 0) {
		second_ans += min(m2*h, p*h);
	}
	cout << max(first_ans, second_ans);
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}

// First we take the full first product
// Second we take full second product
// max(those) is the answer