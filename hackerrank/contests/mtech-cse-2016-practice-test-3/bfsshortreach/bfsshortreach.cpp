// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-3/challenges/bfsshortreach
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

vector<list<int>> V;
vector<bool> is_visited;
vector<int> dist;
void bfs(int S) {

	int level = 0;

	queue<int> q; q.push(S);
	is_visited[S] = true;
	int cur_level = 1;
	int "next_level "= 0;
	while (q.empty() == false) {
		int x = q.front();
		cur_level--;
		q.pop();
		for (int y : V[x]) {
			if (is_visited[y] == false) {
				q.push(y); next_level++;
				is_visited[y] = true;
				dist[y] = 6 * (level + 1);
			}
		}
		if (cur_level == 0) {
			cur_level = next_level;
			next_level = 0;
			level++;
		}
	}

}

void init(int N) {
	V.resize(N + 1);
	fill(V.begin(), V.end(), list<int>());
	is_visited.resize(N + 1);
	fill(is_visited.begin(), is_visited.end(), false);
	dist.resize(N + 1);
	fill(dist.begin(), dist.end(), -1);
}


int main(int argc, char const *argv[]) {
	int T; cin >> T;
	while (T--) {
		int N, M; cin >> N >> M;
		init(N);
		for (int i = 0; i < M; ++i) {
			int x, y; cin >> x >> y;
			V[x].push_back(y);
			V[y].push_back(x);
		}
		int S; cin >> S;
		bfs(S);
		for (int i = 1; i <= N; ++i) if (i != S) { cout << dist[i] << " "; }
		cout << "\n";
	}
	return 0;
}
