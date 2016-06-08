using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
class Solution {
	int count(int x) {
		int  cnt = 0;
		while (x > 0) {
			cnt ++;
			x -= (x & -x);
		}
		return cnt;
	}
public:
	vector<int> countBits(int num) {
		vector<int> v(num +_1); 
		for (int i = 1; i <= num; ++i) v[i] = v[i&(i-1)] +1;
		return v;
	}
};

int main(int argc, char const *argv[]) {

	int x;
	while (scanf("%d", &x)) {
		cout << count(x) << endl;
	}
	// cout<<cnt<<endl;
	return 0;
}
