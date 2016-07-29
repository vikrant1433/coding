using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

class Solution {
	long long pow3(int k) {
		long long ans = 1;
		long long base = 3;
		while (k) {
			if (k % 2 == 1) {
				ans *= base;
			}
			base *= base;
			k /= 2;
		}
		return ans;
	}
public:
	int integerBreak(int n) {
		switch (n) {
			case 2: return 1; 
			case 3: return 2; 
			case 4:	return 4; 
		}
		int k = n / 3;
		if (n % 3 == 0) {
			return pow3(k);
		} else if (n % 3 == 1) {
			return pow3(k - 1) * 4;
		} else {
			return pow3(k) * 2;
		}
	}
};

int main(int argc, char const *argv[]) {
	Solution s; int n;
	while (1) {
		cin >> n;
		cout << s.integerBreak(n) << endl;
	}
	return 0;
}
