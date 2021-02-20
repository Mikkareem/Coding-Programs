#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
	int n, m;
	cin >> n >> m;
	
	vector<int> edges[n + 1], dist(n + 1, INF), parent(n + 1, -1);
	
	vector<vector<int>> weights(n + 1, vector<int>(n + 1, 0));
	
	for(int i = 0; i < m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		edges[u].push_back(v);
		weights[u][v] = w;
	}
	
	int source;
	cin >> source;
	int current = source;
	
	vector<bool> selected(n + 1, false);
	dist[source] = 0;
	
	int taken = 0;
	
	while(taken < n) {
		selected[current] = true;
		
		for(int neighbour: edges[current]) {
			if(!selected[neighbour]) {
				if(dist[current] + weights[current][neighbour] < dist[neighbour]) {
					dist[neighbour] = dist[current] + weights[current][neighbour];
					parent[neighbour] = current;
				}
			}
		}
		
		int minimum = INF;
		for(int i = 1; i <= n; i++) {
			if(!selected[i] and dist[i] < minimum) {
				minimum = dist[i];
				current = i;
			}
		}
		
		taken++;
	}
	
	for(int i = 1; i <= n; i++) {
		cout << source << " -> " << i << " Distance is " << dist[i] << endl;
	}
	
	int node = 4;
	while(node != -1) {
		cout << node << " -> ";
		node = parent[node];
	}
}
