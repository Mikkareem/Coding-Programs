#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int cnt;
//vector<bool> visited;
vector<int> init, goal, c_nodes;
vector<int> edges[100001];

void dfs(int node, int par, int even, int odd, int level)
{
	// even -> #of flips happened at even level nos (0, 2, 4, ...).
	// odd -> #of flips happened at odd level nos (1, 3, 5, ...).
	// If even no of flips happened, then there is no change in the original value.
	// If odd no of flips happened, then there is a flip in the original value
	// x ^ 0 = x
	// x ^ 1 = !x
	int curr_node_resultant = init[node] ^ (level%2==0?even:odd)%2;
	if(goal[node] != curr_node_resultant) {
		(level%2==0?even:odd) += 1;
		cnt++;
		c_nodes.pb(node);
	}
	
	for(int child: edges[node]) {
		if(child != par) {
			dfs(child, node, even, odd, level+1);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	init.resize(n+1);
	goal.resize(n+1);
	//visited.resize(n+1, false);
	
	for(int i = 0; i < n-1; i++) {
		int u, v;
		cin >> u >> v;
		edges[u].pb(v);
		edges[v].pb(u);
	}
	
	for(int i = 1; i <= n; i++) cin >> init[i];
	for(int i = 1; i <= n; i++) cin >> goal[i];
	
	//bfs(1, -1);
	dfs(1, 0, 0, 0, 0);
	cout << cnt << '\n';
	for(int i: c_nodes) cout << i << '\n';
}

//Brute Force -> O(N^2)

//void flip(int node, int par, bool flippable)
//{
	//if(flippable) {
		//init[node] ^= 1;
	//}
	
	//for(int child: edges[node]) {
		//if(child != par) {
			//if(flippable) flip(child, node, false);
			//else flip(child, node, true);
		//}
	//}
//}

//void bfs(int node, int par)
//{
	//if(init[node] != goal[node]) {
		//flip(node, par, true);
		//cnt++;
	//}
	
	//queue<int> q;
	//q.push(node);
	//visited[node] = true;
	
	//while(!q.empty()) {
		//int current = q.front();
		//q.pop();
		
		//for(int child: edges[current]) {
			//if(!visited[child]) {
				//visited[child] = true;
				//q.push(child);
				//if(init[child] != goal[child]) {
					//flip(child, current, true);
					//cnt++;
				//}
			//}
		//}
	//}
//}
