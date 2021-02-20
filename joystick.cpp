#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, minute = 0;
	cin >> a >> b;
	if(a == 1 and b == 1) {
		cout << 0;
		return;
	}
	bool firstcharge = (a <= b);
	while(a != 0 and b != 0) {
		if(firstcharge) {
			a += 1;
			b -= 2;
		} else {
			a -= 2;
			b += 1;
		}
		
		if(a <= 2) firstcharge = true;
		if(b <= 2) firstcharge = false;
		minute++;
	}
	
	cout << minute;
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
