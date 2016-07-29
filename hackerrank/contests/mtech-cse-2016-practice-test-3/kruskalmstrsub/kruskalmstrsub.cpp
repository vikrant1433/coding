// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-3/challenges/kruskalmstrsub
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
int N, M;
struct Edge {
	int u;
	int v;
	int w;
	Edge(int u, int v, int w) {
		this->u = u;
		this->v = v;
		this->w = w;
	}
};
struct cmp {
	bool operator()(Edge e1, Edge e2) {
		return e1.w < e2.w;
	}
};

vector<int> P;
int parent(int x) {
	while (P[x] != P[P[x]]) {
		P[x] = P[P[x]];
	}
	return P[x];
}
bool is_disjoint(int u, int v) {
	return parent(u) != parent(v);
}
void Union(int u, int v) {
	if (u > v) {
		swap(u,v);
	}
	int pv = parent(v);
	int pu = parent(u);
	P[pv] = pu;
}
int main(int argc, char const *argv[]) {
	cin >> N >> M;
	vector<Edge> E;
	P.resize(N+1);
	for (int i = 1; i < P.size(); ++i) P[i] = i;

	for (int i = 0; i < M; ++i) {
		int x, y, r; cin >> x >> y >> r;
		E.push_back(Edge(x, y, r));
	}
	sort(E.begin(), E.end(), cmp());
	int ans = 0;
	for (Edge e : E) {
		if (is_disjoint(e.u, e.v)) {
			Union(e.u, e.v);
			N--;
			ans += e.w;
		}
		if (N == 1) {
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
