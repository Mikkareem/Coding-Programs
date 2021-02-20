#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, q;
	cin >> n >> k >> q;
	vector<int> ini(n, k);
	
	for(int i = 0; i < q; i++) {
		int x;
		cin >> x;
		ini[x-1]++;
	}
	
	for(int i: ini) {
		i -= q;
		puts(i>0?"Yes":"No");
	}
}

