// https://www.hackerrank.com/contests/mtech-cse-2016-practice-test-2/challenges/array-splitting
using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)


int A[20000];
LL prefix_sum[20000];
// LL range_sum(int L, int H) {
// 	if (L-1 > 0) {
// 		return prefix_sum[H];
// 	} else {
// 		return prefix_sum[H] - prefix_sum[L-1];
// 	}
// }
int find_pivot(int L, int H) {
	LL SL = 0 , SH = prefix_sum[H];
	if (L - 1 >= 0) {
		SL = prefix_sum[L - 1];
	}
	if ((SH - SL) % 2 == 0) {
		LL key = SL + (SH - SL) / 2;
		auto it = lower_bound(prefix_sum + L, prefix_sum + H + 1, key);
		if (*it == key) {
			return it - prefix_sum;
		} else {
			return -1;
		}
	}
	return -1;
}
int game(int L, int H) {
	if (L >= H) {
		return 0;
	}
	int x = 1;
	int P = find_pivot(L, H);
	// printf("L =%d P=%d H=%d\n", L , P , H);
	if (P == -1) return 0;
	int a = game(L, P);
	int b = game(P + 1, H);
	return 1 + max(a, b);
}
void printArr(LL* A, int n) {
	for (int i = 0; i < n; ++i) {
		cout << prefix_sum[i] << " ";
	}
	cout << endl;
}
int main(int argc, char const *argv[]) {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cin >> A[0];
		prefix_sum[0] = A[0];
		for (int i = 1; i < n; ++i) {
			cin >> A[i];
			prefix_sum[i] = prefix_sum[i - 1] + A[i];
		}
		cout << game(0, n - 1) << endl;
		// printArr(prefix_sum, n);
	}
	return 0;
}
