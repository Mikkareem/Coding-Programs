#include<bits/stdc++.h>
using namespace std;

void solve()
{
	// O(n) approach, Two pointers approach
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &i: a) cin >> i;
	int left = 0, right = 0, ans = 1;
	while(left < n) {
		if(right+1 < n and a[right+1] <= 2*a[right]) {
			while(right+1 < n and a[right+1] <= 2*a[right]) {
				right++;
			}
			ans = max(ans, right - left + 1);
			left = right;
		} else {
			left++;
			right++;
		}
	}
	cout << ans;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
