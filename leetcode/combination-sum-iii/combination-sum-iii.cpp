using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
void printv(vector<int> &v) {
	for(auto it : v) {
		cout<<it<<" ";
	}
	cout<<"\n";

}
class Solution {
public:
	vector<vector<int>> vv;
	bool util(int n, int k , int p, vector<int> &v) {
		if (n < 0 || k < 0) { return false; }
		if (n == 0 && k == 0) { return true; }
		for (int i = p; i <= 9; ++i) {
			v.push_back(i);
			// cout<<n<<" "<<k<<" "<<i<<endl;
			// printv(v);
			if (util(n - i, k - 1, i + 1, v)) { vv.push_back(v); }
			 							  { v.pop_back()   ; }
		}

		return false;
	}
	vector<vector<int>> combinationSum3(int k, int n) {

		vector<int> v;
		util(n, k, 1, v);
		return vv;
	}
};
void printvv(vector<vector<int>> &v) {
	for(vector<int> &i : v) {
		for(int j : i) { cout<<j<<" ";}
		cout<<"\n";
	}
}
int main(int argc, char const *argv[]) {
	Solution s;
	vector<vector<int>> v = s.combinationSum3(3, 9);
	printvv(v);
	return 0;
}
