// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-2/challenges/coin-change
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

int C[100], N, M;
LL dp[300][55];
// LL change(int money_left, int j) {
// 	// printf("money_left %d\n",money_left );
// 	if (money_left < 0) return 0L;
// 	if (money_left == 0) return 1L;
// 	if (j == M) return 0L;
// 	if (dp[money_left][j] != -1) return dp[money_left][j];
// 	return dp[money_left][j] = change(money_left - C[j], j) + change(money_left, j + 1);
// }
int main(int argc, char const *argv[]) {
	memset(dp, -1, sizeof dp);
	cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		cin >> C[i];
	}
	for(int i=0; i<M; i++) dp[0][i] = 1; 		// base case if money is zero then there is only one way to do that.
		
	for (int i = 1; i <= N; ++i) {
		for (int j = 0; j < M; ++j) {
			LL x = 0, y = 0;
			if (i - C[j] >= 0) {
				x = dp[i-C[j]][j];	// include jth coin
			}
			if (j-1 >= 0) {
				y = dp[i][j-1];		// exclude jth coin
			}
			dp[i][j] = x + y;
		}
	}
	cout<<dp[N][M-1]<<endl;
	// cout << change(N, 0) << endl;
	return 0;
}
