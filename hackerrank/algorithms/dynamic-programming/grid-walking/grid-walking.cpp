// using namespace std;
// #include <bits/stdc++.h>
// #define LL long long
// #define MOD (1000000000+7)
// int T, N, M;
// int D[110];
// int path = 0;
// struct Position {
// 	int pos[110];
// };

// void print(struct Position p) {
// 	for (int i = 1; i <= N; ++i) {
// 		cout<<p.pos[i];
// 		if (i != N) cout<<" ";
// 		else cout<<" ";
// 	}
// }
// bool is_valid_move(struct Position I , int dim, int step) {
// 	int x = I.pos[dim] + step;
// 	return 1 <= x && x <= D[dim];
// }
// int line_no = 0;
// void move(struct Position I, int dimension, int cnt) {
// 	if (cnt == M) {
// 		path++;
// 		return ;
// 	}
// 	for (int dim = 1; dim <= N; ++dim) {
// 		if (is_valid_move(I, dim, 1)) {
// 			I.pos[dim]++;
// 			// cout<<line_no++<<"# +"; print(I);
// 			// cout<<"dim = "<<dimension<<" cnt = "<<cnt+1<<endl;
// 			move(I, dim, cnt + 1);
// 			I.pos[dim]--;
// 		}
// 		if (is_valid_move(I, dim, -1)){
// 			I.pos[dim]--;
// 			// cout<<line_no++<<"# -"; print(I);
// 			// cout<<"dim = "<<dimension<<" cnt = "<<cnt+1<<endl;
// 			move(I, dim, cnt + 1);
// 			I.pos[dim]++;
// 		}
// 	}
// }
// int main(int argc, char const *argv[]) {

// 	struct Position I;
// 	cin >> T;
// 	while (T--) {
// 		path = 0;
// 		cin >> N >> M;
// 		for (int i = 1; i <= N; ++i) {
// 			cin >> I.pos[i];
// 		}
// 		for (int i = 1; i <= N; ++i) {
// 			cin >> D[i];
// 		}
// 		move(I, 1, 0);
// 		cout << path << endl;
// 	}
// 	return 0;
// }
//============================================================================
// Name        : grid_walk.cpp
// Author      : olimpoUS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define MOD 1000000007
long long M[301][101][101];
long long hm(int t , int m, int x) {
	if (t == 0) return 1;
	if (M[t][m][x] == 0) {
		if (x != 1)
			M[t][m][x] += hm(t - 1, m, x - 1);
		if (x != m)
			M[t][m][x] += hm(t - 1, m, x + 1);
		M[t][m][x] %= MOD;
	}
	return M[t][m][x];
}
long long C[301][301];
long long Comb(int n, int k) {
	if (k > n || k < 0)return 0;
	if (n == k || k == 0) return 1;
	if (C[n][k] == 0) {
		C[n][k] = Comb(n - 1, k) + Comb(n - 1, k - 1);
		C[n][k] %= MOD;
	}
	return C[n][k];
}
int n, m, d[11], x[11], t;
long long DP[11][301];
int main() {
	cin >> t;
	while (t--) {
		cin >> n >> m;

		for (int i = 0 ; i < 11; i++)
			for (int j = 0 ; j < 301 ; j++)
				DP[i][j] = 0;
		DP[0][0] = 1;
		for (int i = 1; i <= n ; i++)
			cin >> x[i];
		for (int i = 1; i <= n ; i++)
			cin >> d[i];
		for (int i = 1 ; i <= n ; ++i)
			for (int j = 0 ; j <= m; j++) {

				for (int k = 0 ; k <= j ; k++) {
					long long s = hm(k, d[i], x[i]) * DP[i - 1][j - k];
					s %= MOD;
					s *= Comb(j, k);
					DP[i][j] += s;
					DP[i][j] %= MOD;

				}
			}
		cout << DP[n][m] << endl;
// cout << hm(m,d[n],x[n]) <<endl;
	}
	return 0;
}
