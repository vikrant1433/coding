// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-3/challenges/bfsshortreach
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
int N, M; 
vector<vector<int>> V;
vector<bool> is_visited;
vector<int> D;
struct cmp {
	bool operator()(pair<int, int> & lhs, pair<int, int> & rhs) {
		return lhs.second > rhs.second;
	}
};

void dijkstra(int S) {
	priority_queue< int, vector<pair<int, int>> , cmp> pq;
	D[S] = 0;
	pq.push(make_pair(S, 0));
	while (!pq.empty()) {
		pair<int, int> p = pq.top(); pq.pop();
		int x = p.first;
		if (is_visited[x] == false) {
			for (int y = 1; y <= N; y++) {
				int w = V[x][y];
				if (w != INT_MAX && is_visited[y] == false) {		// if there is an edge between x and y  and y is not visited
					D[y] = min(D[y], D[x] + w);
					pq.push(make_pair(y, D[y]));
				}
			}
		}
		is_visited[x] = true;
	}
}
void init(int N) {
	is_visited.resize(N + 1);
	fill(is_visited.begin(), is_visited.end(), false);
	V.resize(N + 1);
	fill(V.begin() + 1, V.end(), vector<int>(N + 1, INT_MAX));
	D.resize(N + 1);
	fill(D.begin(), D.end(), INT_MAX);
}

int main(int argc, char const *argv[]) {
	int T; cin >> T;
	while (T--) {
		cin >> N >> M;
		init(N);
		for (int i = 0; i < M; ++i) {
			int x, y, r; cin >> x >> y >> r;
			V[x][y] = min(V[x][y], r);
			V[y][x] = min(V[y][x], r);
		}
		int S; cin >> S;
		dijkstra(S);
		for (int i = 1; i <= N; ++i)
			if (i != S) {
				D[i] = (D[i] == INT_MAX) ? -1 : D[i] ;
				cout << D[i] << " ";
			}
		cout << "\n";
	}
	return 0;
}
