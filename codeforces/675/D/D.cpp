using namespace std;
#include <bits/stdc++.h>


int main(int argc, char const *argv[]) {

	int n; cin >> n;
	int v; cin >> v;
	set<int> numbers; numbers.insert(v);
	map<int, int> left;
	map<int, int> right;
	for (int i = 0; i < n - 1; ++i) {

		int result;
		cin>>v;
		auto it =  numbers.upper_bound(v);

		if (it != numbers.end() && left.find(*it) == left.end()) {
			result = *it;
			left[*it] = v;
		} else {
			it--;
			result = *it;
			right[*it] = v;
		}
		numbers.insert(v);
		cout<<result;
		if (i != n-2) cout<<" ";
		else cout<<"\n";
	}
	return 0;
}
