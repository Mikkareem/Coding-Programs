#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	vector<int> heights(n);
	for(int &i: heights) cin >> i;
	if(n == 1) {
		puts("YES");
		return;
	}
	
	for(int i = 0; i < n - 1; i++) {
		m += heights[i] - max(0, heights[i+1]-k);
		if(m < 0) {
			puts("NO");
			return;
		}
	}
	puts("YES");
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while(t--) {
		solve();
		//cout << '\n';
	}
}