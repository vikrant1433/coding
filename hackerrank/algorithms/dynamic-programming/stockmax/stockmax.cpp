using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)


int P[50010];
int main(int argc, char const *argv[]) {
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int N; cin >> N;
		for (int j = 0; j < N; ++j) {
			cin >> P[j];
		}
		LL profit = 0;
		int max_val = INT_MIN;
		for (int k = N - 2; k >= 0; k--) {
			max_val = max(P[k+1] , max_val);
			if (max_val - P[k] > 0) {
				profit += max_val - P[k];
			}
		}
		cout<<profit<<endl;
	}
	return 0;
}
