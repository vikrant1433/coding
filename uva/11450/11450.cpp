using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

int N, M, C, K;
int k_size[50];
int A[30][30];
int ans = INT_MIN;
int dp[201][30];
int f(int row, int col, int sum) {
	// printf("A[%d][%d] = %d sum = %d\n",row, col, A[row][col], sum);
	if (sum > M) {
		return INT_MIN;
	}
	if (row == C) {
		return sum;
	}
	if (dp[sum][row] != -1) {
		return dp[sum][row];
	}
	int r = INT_MIN;
	for (int i = 0; i < k_size[row]; ++i) {
		r = max(r,f(row + 1, i, sum + A[row][i]));
	}
	dp[sum][row] = r;
	return r;
}
int main(int argc, char const *argv[]) {
	cin>>N;
	while(N--) {
		cin>>M>>C;
		for (int i = 0; i < C; ++i) {
			cin>>k_size[i];
			for (int j = 0; j < k_size[i]; ++j) {
				cin>>A[i][j];
			}
		}
		memset(dp, -1, sizeof(dp));
		int ans  = f(0,0,0);
		if (ans > 0) {
			cout<<ans<<endl;
		} else {
			cout<<"no solution"<<endl;
		}
		ans = INT_MIN;
	}
	return 0;
}
