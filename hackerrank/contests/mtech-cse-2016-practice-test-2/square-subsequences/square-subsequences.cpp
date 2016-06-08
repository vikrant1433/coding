// // https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-2/challenges/square-subsequences
// using namespace std;
// #include <bits/stdc++.h>
// #define LL long long
// #define MOD (1000000000+7)

// int dp[222][222];

// LL common_subsequences(string A, string B) {
// 	for (int i = 0; i <= A.size(); ++i) dp[i][0] = 1;
// 	for (int i = 0; i <= B.size(); ++i) dp[0][i] = 1;

// 	for (int i = 1; i <= A.size(); ++i) {
// 		for (int j = 1; j <= B.size(); ++j) {
// 			if (A[i] == B[j - 1] && A[A.size() - 1] == B[j - 1]) {
// 				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
// 			}
// 			// else {
// 			// 	dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
// 			// }
// 		}
// 	}
// 	return dp[A.size()][B.size()];
// }

// //9004668810
// //8953141817
// //9325393925
// int main(int argc, char const *argv[]) {
// 	string s1, s2;
// 	string S;
// 	// cin>>s1>>s2;
// 	int ans = 0;
// 	int t; cin >> t;
// 	while (t--) {
// 		ans = 0;
// 		cin >> S;
// 		for (int i = 1; i <= S.size() - 1; ++i) {
// 			s1 = S.substr(0, i);
// 			s2 = S.substr(i);
// 			ans += common_subsequences(s1, s2);
// 			ans %= MOD;
// 		}
// 		cout << ans << endl;
// 	}
// 	return 0;
// }



// using namespace std;
// #include <bits/stdc++.h>
// #define LL long long
// #define MOD (1000000000+7)

// LL ans = 0;
// string S;
// bool is_sqr_str(string s) {
// 	int len = s.size();
// 	return len != 0 && len % 2 == 0 && s.substr(0, len / 2) == s.substr(len / 2);
// }
// int square(string so_far, int i) {
// 	if (i == S.size()) {
// 		if (is_sqr_str(so_far))
// 			return 1;
// 		return 0;
// 	}
// 	int x = square(so_far + S[i], i + 1);
// 	int y = square(so_far, i + 1);
// 	return x + y;
// }


// int main(int argc, char const *argv[]) {
// 	int t; cin >> t;
// 	while (t--) {
// 		cin >> S;
// 		cout << square("", 0) << endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
#define bs 1000000007
using namespace std;
int tests;
int ans;
int dp[500][500];
int solve(string st1, string st2)
{
	for (int i = 0; i <= st1.size(); i++)
	{
		for (int j = 0; j <= st2.size(); j++)
		{
			dp[i][j] = 0;
		}
	}
	for (int i = 0; i < st2.size(); i++)
	{
		if (st2[i] == st1[0])
			dp[1][i + 1] = 1;
		if (i)
			dp[1][i + 1] += dp[1][i];
	}
	for (int i = 1; i < st1.size(); i++)
	{
		for (int j = 0; j < st2.size(); j++)
		{
			dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1] - dp[i][j];
			if (st1[i] == st2[j])
			{
				dp[i + 1][j + 1] += dp[i][j];
			}
			dp[i + 1][j + 1] = (dp[i + 1][j + 1] % bs);
			if (dp[i + 1][j + 1] < 0)
				dp[i + 1][j + 1] += bs;
		}
	}
	return dp[st1.size()][st2.size()];
}
int main() {
	ios_base::sync_with_stdio(0);
	//cin.tie(0);

	cin >> tests;
	for (; tests; --tests)
	{
		ans = 0;
		string st;
		cin >> st;
		for (int len = 1; len < st.size(); len++)
		{
			string st1, st2;
			st1 = st.substr(0, len);
			st2 = st.substr(len);
			ans += solve(st2, st1);
			ans %= bs;
		}
		cout << ans << endl;
	}
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define MOD 1000000007

// char C[222];

// long long M[222][222];

// int l = 0;

// long long DP(int a , int b) {
// 	M[0][0] = 1;
// 	for (int i = 0 ; i <= a ; i++)
// 		for (int j = l ; j < b - a; j++) {
// 			if (i * j == 0) {
// 				M[i][j] = 1;
// 				continue;
// 			}
// 			if (C[i - 1] != C[j + a])
// 				M[i][j] = (MOD + M[i - 1][j] + M[i][j - 1] - M[i - 1][j - 1]);
// 			else
// 				M[i][j] = (M[i - 1][j] + M[i][j - 1]);
// 			M[i][j] %= MOD;
// 		}
// 	l = b - a;
// 	return M[a][b - a - 1];
// }
// int main() {
// 	int t = 0;
// 	scanf("%d", &t);
// 	while (t--) {
// 		scanf("%s", C);
// 		int s = 0;
// 		l = 0;
// 		for (int i = 0 ; i < strlen(C); i++, l = 0)
// 			for (int j = i + 1 ;  j < strlen(C); j++)
// 				if (C[i] == C[j]) {
// 					s += DP(i, j);
// 					s %= MOD;
// 					//printf("%d %d %d\n",i,j,DP(i,j));
// 				}
// 		printf("%d\n", s);
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// #define M 1000000007

// int t, N, dp[205][205];
// string s;

// inline int mod(int x) {
// 	return x >= 0 ? x % M : x % M + M;
// }

// int acs(int m) {
// 	for (int i = 0; i <= m; ++i)
// 		dp[i][N] = 1;
// 	for (int j = m; j <= N; ++j)
// 		dp[m][j] = 1;
// 	for (int i = m - 1; i >= 0; --i) {
// 		for (int j = N - 1; j >= m; --j) {
// 			dp[i][j] = mod(mod(dp[i + 1][j] + dp[i][j + 1]) - dp[i + 1][j + 1]);
// 			if (s[i] == s[j])
// 				dp[i][j] = mod(dp[i][j] + dp[i + 1][j + 1]);
// 		}
// 	}
// 	return dp[0][m];
// }


// int memo[205][2];

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cin >> t;
// 	while (t--) {
// 		cin >> s;
// 		N = s.length();
// 		for (int i = 1; i < N; ++i) {
// 			acs(i);
// 			memo[i][0] = mod(dp[0][i] - 1);
// 			memo[i][1] = mod(dp[0][i + 1] - 1);
// 		}
// 		int sum = 0;
// 		for (int i = 1; i < N; ++i) {
// 			sum = mod(mod(sum + memo[i][0]) - memo[i][1]);
// 		}
// 		cout << sum << endl;
// 	}
// 	cout << flush;
// }