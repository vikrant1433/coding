using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
class Solution {
public:
    int maxProduct(vector<string>& w) {
        vector<bitset<26> > v(w.size());
        
        for(int i=0; i< v.size(); i++) {
            for(char c: w[i]) v[i].set(c-'a');
        }
        int ans = 0;
        for(int i = 0; i < w.size(); i++) {
            for(int j = i+1; j < w.size(); j++) {
                if((v[i]&v[j]).none()) ans = max(ans ,(int) w[i].size() * (int)w[j].size());
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[]) {
	Solution s;
	vector<string> v = {"abcw","baz","foo","bar","xtfn","abcdef"};
	cout<<s.maxProduct(v)<<endl;;
	return 0;
}
