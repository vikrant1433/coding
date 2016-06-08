// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-2/challenges/building-bridges
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}
int main(int argc, char const *argv[]) {

	int LCS[1010][1010];
	int n; cin >> n;
	vector<pair<int, int>> X(n);
	vector<pair<int, int>> Y(n);
	for (int i = 0; i < n; ++i) cin >> X[i].first >> X[i].second;
	for (int i = 0; i < n; ++i) cin >> Y[i].first >> Y[i].second;
	sort(X.begin(), X.end(), cmp);
	sort(Y.begin(), Y.end(), cmp);

	for (int i = 0; i <= n; ++i) LCS[0][i] = LCS[i][0] = 0;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (X[i - 1].second == Y[j - 1].second) {
				LCS[i][j] =  1 + LCS[i - 1][j - 1];
			} else {
				LCS[i][j] = max(LCS[i][j - 1], LCS[i - 1][j]);
			}
		}
	}
	cout << LCS[n][n] << endl;
	return 0;
}
