using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
class Solution {
	int divide_exp(long long & dd, long long ds) {
		int cnt = 1;
		int ans = 0;
		if (dd >= ds) {
			dd -= ds;
			ans++;
		}
		while (ds  <= INT_MAX - ds && dd - ds >=  ds) {
			ds = ds + ds;
			dd -= ds;
			cnt = cnt + cnt;
			ans += cnt;
		}
		return ans;

	}
public:
	int divide(long long dividend, long long divisor) {
		int ans = 0;
		if (dividend == 0) {
			return 0;
		}
		if (divisor == 1 || divisor == -1) {
			if (divisor == -1 && dividend < 0) {
				if (dividend == INT_MIN) {
					return INT_MAX;
				}
				return -dividend;
			}
			if (divisor == -1 && dividend > 0) {
				return -dividend;
			}
			if (divisor == 1) {
				return dividend;
			}
		}

		long long dd = dividend,  ds = divisor;
		dividend = abs(dividend);
		divisor = abs(divisor);

		long long cnt = 1;
		bool is_doubling = false;
		long long old_divisor = divisor;
		while(dividend >= divisor) {
			ans += divide_exp(dividend , divisor);
		}
		if (ds < 0 ^ dd < 0) {
			return -ans;
		}

		return ans;
	}
};

int divide(int dividend, int divisor) {
	int ans = 0;
	if (dividend == 0) {
		return 0;
	}
	if (divisor == 1 || divisor == -1) {
		if (divisor == -1 && dividend < 0) {
			if (dividend == INT_MIN) {
				return INT_MAX;
			}
			return -dividend;
		}
		if (divisor == -1 && dividend > 0) {
			return -dividend;
		}
		if (divisor == 1) {
			return dividend;
		}
	}
	if (dividend > 0 && divisor > 0) {
		while (dividend >= divisor) {
			dividend -= divisor;
			ans++;
		}
	} else if (dividend < 0 && divisor > 0) {
		while (dividend < 0) {
			dividend += divisor;
			ans--;
		}
	} else if (dividend > 0 && divisor < 0) {
		while (dividend > 0) {
			dividend += divisor;
			ans--;
		}
	} else if (dividend < 0 && divisor < 0) {
		while (dividend < 0) {
			dividend -= divisor;
			ans++;
		}
	}


	// if (absolute(divisor) == 1) {
	// 	if (divisor == -1) {
	// 		return negate(dividend);
	// 	}
	// 	return dividend;
	// }

	// int dd = dividend,  ds = divisor;
	// dividend = absolute(dividend);
	// divisor = absolute(divisor);

	// int cnt = 1;
	// int ans  = 0;
	// bool is_doubling = false;
	// int old_divisor = divisor;
	// // printf("dividend = %d divisor = %d\n",dividend , divisor);
	// while (divisor  <= INT_MAX - divisor && dividend - divisor >=  divisor) {
	// 	is_doubling = true;
	// 	divisor = divisor + divisor;
	// 	dividend -= divisor;
	// 	cnt = cnt + cnt;
	// 	ans += cnt;
	// 	// printf("dividend = %d divisor = %d cnt = %d \n",dividend , divisor, cnt);
	// }
	// // if (is_doubling) {
	// // 	// ans += cnt;
	// // }
	// while (dividend >= old_divisor) {
	// 	dividend -= old_divisor;
	// 	ans++;
	// }
	// if (ds < 0 ^ dd < 0) {
	// 	ans = ~ans;
	// 	ans++;
	// }

	return ans;
}
int main(int argc, char const *argv[]) {
	Solution s;
	int x, y;
	while (1) {
		cin >> x >> y;
		cout << s.divide(x, y) << endl;
	}
	return 0;
}
