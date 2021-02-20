#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int l, r;
	cin >> l >> r;
	if(2*l > r) {
		cout << -1 << ' ' << -1;
	} else {
		cout << l << ' ' << 2*l;
	}
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


/*
 * 
 * 
 * To find LCM(x, y)
The possible answer is any one of the following.
x, 2x, 3x, 4x, 5x,......

i.e., LCM of two numbers is always the multiple of those two numbers.
Hence we can check multiples of x, to find the LCM(x, y)

if we take x = L, y = 2*L,
then LCM(L, 2*L) = 2*L

if we found 2*L in the given range [L, R], then answer exists.
else answer does not exist.

*/
