#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int C, R;
	scanf("%d%d", &C, &R);
	int first = C/9 + (C%9!=0);
	int second = R/9 + (R%9!=0);
	if(first == second) {
		printf("%d %d", 1, second);
		return;
	}
	if(first < second) {
		printf("%d %d", 0, first);
	} else {
		printf("%d %d", 1, second);
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		//printf("Case #%d: ", i);
		solve();
		cout << '\n';
	}
}
