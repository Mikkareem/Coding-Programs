#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long n;
	cin >> n;
	int total_powers_of_2 = 0;
	for(int i = 0; i < 32; i++) {
		if((n & (1 << i)) != 0) {
			total_powers_of_2 = i;
		}
	}
	long long sum_powers_of_2 = 0;
	for(int i = 0; i <= total_powers_of_2; i++) {
		sum_powers_of_2 += (1 << i);
	}
	cout << (n*(n+1)/2) - 2*(sum_powers_of_2);
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


// Ans = (n*(n+1)/2) - 2*sum_of_powers_of_twos_which_n_has_in_it
