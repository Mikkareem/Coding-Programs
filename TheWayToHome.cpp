#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, d;
	cin >> n >> d;
	string river;
	cin >> river;
	
	int index = 0, jump = 0;
	short can = 1;
	while(can and index < n - 1) {
		int prev = index;
		for(int i = d; i > 0; i--) {
			if(index + i >= n-1 or river[index + i] == '1') {
				index += i;
				break;
			}
		}
		if(prev == index) can = 0;
		jump += 1;
	}
	
	if(can) cout << jump;
	else cout << -1;
}

int main()
{
	int t = 1;
	//cin >> t;
	while(t--) {
		solve();
		cout << '\n';
	}
}
