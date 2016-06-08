using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

class Solution {
public:
	void reverseWords(string &s) {	// do in-place operation only
		int i = 0;
		reverse(s.begin(), s.end());
		for (int k = 0; k < s.size(); ++k) {
			if (s[k] != ' ') {
				if (i != 0) s[i++] = ' ';
				int j = k;
				while (j < s.size() && s[j] != ' ') s[i++] = s[j++];
				reverse(s.begin() + i - (j - k) , s.begin() + i);
				k = j;
			}
		}
		s.erase(s.begin()+i, s.end());

	}
};


int main(int argc, char const *argv[]) {
	Solution sol;
	string s; getline(cin, s);
	sol.reverseWords(s);
	cout << s;
	return 0;
}
