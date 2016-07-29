// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-3/challenges/game-on-tree-1
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
int N;
vector<int> W;
vector<int> P;
vector<bool> is_visited;
vector<vector<int>> adj;
vector<long long> CW;
void dfs(int u) {
	if (is_visited[u] == false) {
		is_visited[u] = true;
		for (int v : adj[u]) {
			if (is_visited[v] == false) {
				P[v] = u;
				dfs(v);
				CW[u] += CW[v];
			}
		}
	}
}
void print_vec_of_LL(vector<LL> & V) {
	for(LL i = 0; i < V.size(); i++) {
		cout<<V[i]<<" ";
	}
	cout<<"\n";
}
void print_vec_of_int(vector<int> & V) {
	for(int i = 0; i < V.size(); i++) {
		cout<<V[i]<<" ";
	}
	cout<<"\n";
}
void init(){
	adj.resize(N + 1);
	W.resize(N + 1);
	CW.resize(N+1);
	is_visited.resize(N + 1);
	P.resize(N+1);
}
int main(int argc, char const *argv[]) {
	cin >> N;
	init();	
	for (int i = 1; i <= N; ++i) {
		int w; cin >> w;
		W[i] = w;
	}
	for (int i = 0; i < N - 1; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 1; i <= N; ++i) CW[i] = W[i];
	dfs(1);
	// print_vec_of_LL(CW);
	long long ans = 0;
	for (int u = 1; u <= N; ++u) {
		vector<long long> st;
		for (long long v : adj[u]) {
			if (v == P[u]) {		// if
				st.push_back(CW[1] - CW[u]);
			} else {
				st.push_back(CW[v]);
			}
		}
		sort(st.begin(), st.end(), greater<long long>());
		long long sum = 0;
		for (int i = 1; i < st.size(); ++i) sum += st[i];
		ans = max(ans, W[u] + sum);
	}
	cout<<ans<<endl;
	return 0;
}
