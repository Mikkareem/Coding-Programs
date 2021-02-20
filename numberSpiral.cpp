#include<bits/stdc++.h>
using namespace std;
//CSES.fi
void solve()
{
	long long r, c;
	cin >> r >> c;
	if(r >= c) {
		if(r%2 == 0) {
			cout << r*r - (c-1);
		} else {
			cout << (r-1)*(r-1) + 1 + (c-1);
		}
	} else {
		if(c%2) {
			cout << c*c - (r-1);
		} else {
			cout << (c-1)*(c-1) + 1 + (r-1);
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		solve();
		puts("");
	}
}
