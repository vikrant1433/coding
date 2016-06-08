using namespace std;
#include <bits/stdc++.h>
#define MOD (1000000000+7)


class Solution {
public:
	static bool cmp(pair<int, int> x, pair<int, int>y) {
		return x.first < y.first;
	}
	bool is_terminating(long long x) {
		while (x > 0 && x % 2 == 0) {
			x /= 2;
		}
		while (x > 0 && x % 5 == 0) {
			x /= 5;
		}
		return x == 1;
	}
	long long gcd(long long a, long long b) {
		if (a == 0) {
			return b;
		}
		return gcd(b % a, a);
	}
	string fractionToDecimal(long long n, long long d) {
		string ans;
		// cout << "g = " << g << endl;
		
		if ((n < 0 ^ d < 0) && n!=0) {
			ans.insert(0, "-");
		}
		if (n < 0) {
			n *= -1;
		}
		if (d < 0) {
			d *= -1;
		}
		ans.append(to_string(n / d));
		long long g = gcd(n, d);
		n /= g;
		d /= g;

		// printf("n = %lld d = %lld\n", n, d );
		long long rem = n % d;
		// printf("rem  = %lld\n", rem );
		if (rem) {
			ans += ".";
		}
		long long dl = d;
		long long nl = n;
		// string decimal_part;
		// int len = decimal_part.size() ;
		// string first = decimal_part.substr(len / 2)
		//                decimal_part.find( , decimal_part.size() / 2) == -1
		// cout<<"dl = "<<dl<<endl;
		bool it = is_terminating(dl);
		// cout<<"is_terminating = "<<it<<endl;
		// return "1";
		if (it) {
			// int cnt = 40;
			while (rem) {
				rem *= 10;
				ans.append(to_string(rem / dl));

				rem = rem % dl;
			}
		} else {
			string decimal_part;
			rem = nl % dl;
			set< pair<int, int> , bool(*)( pair<int, int> , pair<int, int> ) > remainders(cmp);
			int i = 0;
			remainders.insert(make_pair(rem, i++));
			int idx = 0;
			// int cnt = 40;
			while (1) {

				rem *= 10;
				decimal_part.append(to_string(rem / dl));
				// cout << decimal_part << endl;
				rem = rem % dl;
				auto it = remainders.find(make_pair(rem, i));
				if (it == remainders.end()) {

					remainders.insert(make_pair(rem, i++));
				} else {
					// remainders.insert(make_pair(rem, i++));
					idx = (*it).second;
					decimal_part.insert(idx, "(");
					break;
				}
			}

			// for (auto it = remainders.begin(); it != remainders.end(); it++){
			// 	cout<<(*it).first<<" ";
			// }
			// cout<<endl;

			ans.append(decimal_part);
			ans.push_back(')');

		}
		return ans ;
	}
};

int main(int argc, char const *argv[]) {
	Solution s;
	long long x, y;
	// cout<<__gcd(1,300)<<endl;
	// cout<<s.is_terminating(2147483648L);
	while (1) {
		cin >> x >> y;
		cout << s.fractionToDecimal(x, y) << endl;
	}

	return 0;
}
