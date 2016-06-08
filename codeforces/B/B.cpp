using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
bool is_between(int first, int last, int val) {
	return first <= val && val <= last;
}
int main(int argc, char const *argv[]) {
	int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	long long ans = 0;
	for (int i = 1; i <= n; ++i) {
		int out1 = i + a -d;
		int out2 = i + b -c;
		int out3 = i + a+b-c-d;
		if (is_between(1,n,out1) &&
			is_between(1,n,out2) &&
			is_between(1,n,out3) ) {
			ans += n;
		}	
	}
	cout<<ans<<endl;
	
	return 0;
}
