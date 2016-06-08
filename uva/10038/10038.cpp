using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)


int diff[3333];
int main(int argc, char const *argv[]) {

	int n;
	while (scanf("%d", &n) > 0) {
		memset(diff, -1 , sizeof(diff));
		int first, second;
		cin >> first;
		for (int i = 1; i < n; ++i) {
			cin >> second;
			if (abs(second - first) <= n - 1) {
				diff[abs(second - first)] = 1;
			}
			first = second;
		}
		int * x = find(diff + 1, diff + n, -1);
		if (x == diff + n) {
			cout << "Jolly" << endl;;
		} else {
			cout << "Not jolly" << endl;;
		}
	}
	return 0;
}
