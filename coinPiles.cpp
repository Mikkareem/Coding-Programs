#include<bits/stdc++.h>
using namespace std;
//CSES.fi

void solve()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long first, second;
	first = 2*a-b;
	second = 2*b-a;
	if(first >= 0 and first % 3 == 0 and second >= 0 and second % 3 == 0) {
		printf("YES");
	} else {
		printf("NO");
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
