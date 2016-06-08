#include <bits/stdc++.h>
using namespace std;


int dp[100][100];


// if A[i] == B[j]   dp[i][j] = 2*dp[i-1][j-1]
// else dp[i][j] = dp[i-1][j]+ dp[i][j-1] - dp[i-1][j-1]
int ACS(string A, string B) {
	for (int i = 0; i <= A.size() - 1; ++i) dp[i][0] = 1;
	for (int i = 0; i <= B.size() - 1; ++i) dp[0][i] = 1;

	for (int i = 1; i <= A.size() - 1; ++i) {
		for (int j = 1; j <= B.size() - 1; ++j) {
			if (A[i] == B[j]) {
				dp[i][j] =  dp[i-1][j] + dp[i][j-1];
			} else {
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			}
		}
	}
	return dp[A.size() - 1][B.size() - 1];
}


int main(int argc, char const *argv[]) {

	string s1, s2; cin >> s1 >> s2;
	s1.insert(0, "$");
	s2.insert(0, "$");

	int ans = ACS(s1, s2);
	cout << ans << endl;
	return 0;
}