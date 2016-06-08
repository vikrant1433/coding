using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)

int main(int argc, char const *argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	string ans = "NO";
	if (a == b || (c!=0 && (b-a)/c >= 0 && (b - a) % c  == 0)) {
		ans = "YES";
	}
	cout << ans << endl;
	return   0;
}
