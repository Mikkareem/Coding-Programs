#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	if(n == 1) {
		if(a[0] % 2) {
			cout << -1;
		} else {
			cout << 1 << '\n' << 1;
		}
		return;
	}
	int indices[2] = {0};
	int index = 0;
	for(int i = 0; i < min(2, n); i++) {
		if(a[i] % 2 == 0) {
			indices[0] = i+1;
			indices[1] = i+1;
			break;
		} else {
			indices[index++] = i+1;
		}
	}
	
	if(indices[0] == indices[1]) cout << 1 << '\n' << indices[0];
	else cout << 2 << '\n' << indices[0] << ' ' << indices[1];
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
