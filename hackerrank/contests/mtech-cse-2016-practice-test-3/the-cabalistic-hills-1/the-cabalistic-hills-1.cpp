// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-3/challenges/the-cabalistic-hills-1
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
int N;
bool eulerian_circuit_exist(vector<pair<int, int>> & D) {
	if (D[N].first == 0 || D[1].first == 0) {
		return false;
	}
	for (int i = 1; i < D.size(); i++) {
		if (D[i].first != D[i].second) {
			return false;
		}
	}
	return true;
}
vector<int> P;
int parent(int x) {
	while (P[x] != P[P[x]]) {
		P[x] = P[P[x]];
	}
	return P[x];
}
void Union(int u, int v) {
	P[parent(v)] = parent(u);
}

vector<int> V;
bool is_connected() {
	int cnt = 0;
	if (V.size() < N+1) {
		V.resize(N+1); 
	}
	fill(V.begin(), V.end(), 0);
	for (int i = 1; i <= N; ++i) {
		V[parent(i)]++;
	}
	for (int i = 1; i <= N; ++i) 
		if (V[i] > 1) {
			cnt++;
		}
	return cnt < 2;
}
int main(int argc, char const *argv[]) {
	int t; cin >> t;
	vector<pair<int, int>> degree;		// first = indegree second = outdegree
	while (t--) {
		int M; cin >> N >> M;
		if (P.size() < N+1) { P.resize(N + 1); }
		for (int i = 0; i < P.size(); ++i) P[i] = i;
		if (degree.size() < N+1) { degree.resize(N + 1); }
		fill(degree.begin(), degree.end(), pair<int, int> ());
		for (int i = 0; i < M; ++i) {
			int u, v; cin >> u >> v; // cout << u << " " << v << endl;
			Union(u,v);
			degree[u].second++;
			degree[v].first++;
		}
		if (eulerian_circuit_exist(degree) && is_connected()) {
			cout << "Go on get the Magical Lamp" << endl;
		} else {
			cout << "Danger!! Lucifer will trap you" << endl;
		}
	}
	return 0;
}
