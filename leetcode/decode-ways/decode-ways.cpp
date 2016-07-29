using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000 + 7)
class Solution {
   public:
    int help(int np) {
        if (np == 0) return 1;
        if (np % 2 == 1) {
            return 1 << (n / 2 + 1) - 1;
        } else {
            retun 3 * (1 << (n / 2)) - 1;
        }
    }
    int numDecodings(string s) { int ans = 1; }
};
int main(int argc, char const *argv[]) {
    Solution s;
    int x = s.numDecodings("1234");
    printf("%d\n", x);
    return 0;
}
