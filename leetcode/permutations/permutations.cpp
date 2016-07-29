using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
class Solution {
public:
    vector<vector<int>> permute(vector<int>& N) {
        vector<vector<int>> res;
        sort(N.begin(), N.end());
        res.push_back(N);
        while(next_permutation(N.begin(), N.end())) {
            res.push_back(N);
        }
        return res;
    }
};
void printv(vector<int> & v) {
    for (int i : v) {
        cout<<i<<" ";
    }
}
void printvv(vector<vector<int>> &vv) {
    for (auto v : vv) {
        printv(v);
        cout<<"\n";
    }
}
int main(int argc, char const *argv[]) {
    Solution sol;
    vector<int> v = {0,-1,1};
    vector<vector<int>> vv;
    vv = sol.permute(v);
    printvv(vv);
	return 0;
}
