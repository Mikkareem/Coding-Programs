#include<bits/stdc++.h>
using namespace std;
//CSES.fi

void solve()
{
	int n;
	scanf("%d", &n);
	if(n == 1) {
		printf("1");
		return;
	}
	
	if(n <= 3) {
		printf("NO SOLUTION");
		return;
	}
	
	for(int i = 2; i <= n; i+=2) {
		printf("%d ", i);
	}
	for(int i = 1; i <= n; i+=2) {
		printf("%d ", i);
	}
}

int main()
{
	int t = 1;
	//scanf("%d", &t);
	while(t--) {
		solve();
		puts("");
	}
}
