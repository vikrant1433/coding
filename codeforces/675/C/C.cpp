using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	map<long long, int> d;
    long long sum = 0;
    int ans = n - 1;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sum += t;
        d[sum]++;
        cout<<"ans = "<<ans<<" sum = "<<sum<<" d["<<sum<<"] = "<<d[sum]<<endl;
        ans = min(ans, n - d[sum]);
    }

    cout << ans << endl;

	// int ans = n - 1;
	// int sum = 0;
	// int k = 0;
	// for (int i = 0; i < n; ++i) {
	// 	int a; cin >> a;
	// 	sum += a;
	// 	if (sum == 0) {
	// 		k++;
	// 	}
	// }
	// ans = min(n - 1, n - k);
	// cout << ans << endl;

	// int min_i = INT_MAX, max_i = INT_MIN;
	// int cnt = 2;
	// int second_i = 0;
	// for (int i = 1; i <= n; ++i) {
	// 	int a; cin>>a;
	// 	if (a != 0) {
	// 		cnt --;
	// 		min_i = min(i, min_i);
	// 		max_i = max(i, max_i);
	// 	}
	// 	if (cnt == 0) {
	// 		second_i = i;
	// 		cnt--;
	// 	}
	// }
	// cout<<"min_i = "<<min_i<<endl;
	// cout<<"max_i = "<<max_i<<endl;
	// cout<<"second_i = "<<second_i<<endl;
	// cout<<min(n-1,max_i-min_i, n + min_i - second_i)<<endl;
	return 0;
}
