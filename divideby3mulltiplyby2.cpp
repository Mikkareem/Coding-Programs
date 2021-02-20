#include<bits/stdc++.h>
using namespace std;

vector<long long> dfs(long long v, const unordered_set<long long>& s)
{
	stack<long long> k;
	vector<long long> p;
	k.push(v);
	while(!k.empty()) {
		long long current = k.top();
		p.push_back(current);
		k.pop();
		for(long long neighbour: {current*2, current/3}) {
			if(s.count(neighbour)) {
				k.push(neighbour);
			}
		}
	}
	return p;
}

void solve()
{
	int n;
	cin >> n;
	vector<long long> a(n);
	unordered_set<long long> s;
	for(int i = 0; i < n; i++) cin >> a[i], s.insert(a[i]);
	vector<long long> solution;
	for(int i = 0; i < n; i++) {
		solution = dfs(a[i], s);
		if((int)solution.size() == n) break;
	}
	if((int)solution.size() != n) {
		cout << -1;
	} else {
		for(long long h: solution) {
			cout << h << ' ';
		}
	}
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
