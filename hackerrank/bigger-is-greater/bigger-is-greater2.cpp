using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

int main(int argc, char const *argv[]) {
	string s;
	int t; cin >> t;
	while (t--) {

		cin >> s;
		// string next = s;
		// next_permutation(s.begin(), s.end());
		// if (s == next) {
		// 	cout<<"no answer"<<endl;
		// } else {
		// 	cout<<s<<endl;
		// }
		if (s.size() == 1) {
			cout << "no answer" << endl;
			continue;
		}
		int i = s.size() - 1 ;
		while (i >= 1) {
			if (s[i - 1] >= s[i] ) {
				i--;
			} else {
				break;
			}
		}
		if (i == 0) {
			cout << "no answer" << endl;
		} else {
			reverse(s.begin() + i, s.end());
			// cout<<s[i-1]<<endl;
			// cout<<*upper_bound(s.begin()+i,s.end(),s[i-1])<<endl;
			swap(s[i-1],*upper_bound(s.begin()+i,s.end(),s[i-1]));
			cout << s << endl;
		}
	}

	return 0;
}
