using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

class Solution {

public:
    int bulbSwitch(int n) {
    	return sqrt(n);
    }
};

int main(int argc, char const *argv[]) {
	Solution s;
	while(1) {
		int x; cin>>x;
		int y = s.bulbSwitch(x);
		cout<<y<<endl;
	}
	return 0;
}
