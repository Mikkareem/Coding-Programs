#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, x;
	cin >> n >> m >> x;
	
	int C[n], A[n][m];
	for(int i = 0; i < n; i++) {
		scanf("%d", &C[i]);
		for(int j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	int ans = INT_MAX;
	for(int mask = 1; mask < (1<<n); mask++) {
		int cost = 0;
		vector<int> aSum(m);
		bool ok = true;
		for(int bit = 0; bit < n; bit++) {
			if((mask&(1<<bit)) != 0) {
				cost += C[bit];
				for(int j = 0; j < m; j++) {
					aSum[j] += A[bit][j];
				}
			}
		}
		for(int k: aSum) {
			if(k < x) {
				ok = false;
				break;
			}
		}
		if(ok) ans = min(ans, cost);
	}
	if(ans == INT_MAX) {
		printf("-1");
		return 0;
	}
	printf("%d", ans);
}
