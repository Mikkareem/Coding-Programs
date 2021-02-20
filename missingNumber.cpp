#include<bits/stdc++.h>
using namespace std;
//CSES.fi

void solve()
{
	long long n;
	cin >> n;
	long long sum = 0;
	for(int i = 0; i < n - 1; i++) {
		int x;
		scanf("%d", &x);
		sum += x;
	}
	cout << n*(n+1)/2 - sum;
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
