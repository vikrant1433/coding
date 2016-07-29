using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

class Solution {
public:
	vector<int> topKFrequent(vector<int>& N, int k) {
		unordered_map<int , int> m;
		for (int i : N) m[i]++;
		vector<list<int>> buckets(N.size()+1);		// last index of bucket can be N.size() so size should be N.size()+1
		for (auto it : m) {
			buckets[it.second].push_back(it.first);
		}
		vector<int> ans;
		for (int i = buckets.size() - 1; i >= 0 && k > 0; --i) {
			for (auto it = buckets[i].begin(); it != buckets[i].end() && k > 0; ++it) {
				ans.push_back(*it);
				k--;
			}
		}
		return ans;
	}
};

int main(int argc, char const *argv[]) {
	Solution s;
	vector<int> N = {1};
	vector<int> ans = s.topKFrequent(N, 2);
	for (int i : ans) cout << i << " ";
	cout << endl;
	return 0;
}
