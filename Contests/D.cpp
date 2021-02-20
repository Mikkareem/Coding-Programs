#include<bits/stdc++.h>
using namespace std;

int ceiling(int num, int den)
{
	return (num + den - 1) / den;
}

int main()
{
	int n, x;
	cin >> n >> x;
	map<int, vector<int>> m;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[ceiling(a, x)].push_back(i+1);
	}
	for(auto i: m) {
		for(int candidate: i.second) {
			printf("%d ", candidate);
		}
	}
}
