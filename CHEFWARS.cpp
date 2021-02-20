#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int H, P;
	scanf("%d%d", &H, &P);
	while(H > 0 and P) {
		H -= P;
		P /= 2;
	}
	if(H <= 0) {
		cout << 1;
	} else {
		cout << 0;
	}
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		//printf("Case #%d: ", i);
		solve();
		cout << '\n';
	}
}
