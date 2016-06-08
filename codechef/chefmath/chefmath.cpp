using namespace std;
#include <bits/stdc++.h>
#define MOD (1000000007)
#define size(x)	(sizeof(x)/sizeof(*x))

long long f[]  = {1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903};
int min_fib_required(int x) {
	int cnt = 0;
	int* end = end(f);
	while(x > 0) {
		auto it = upper_bound(f, end, x);
		end = it;
		it--;
		x -= *it;
		cnt++;
	}
	return x < 0
}

int main(int argc, char const *argv[]) {
	int Q,X,K;
	cin>>Q;
	for (int q = 0; q < Q; ++q) {
		cin>>X>>K;

		int min_k = min_fib_required(X);
		if (K < min_k) {
			cout<<0<<endl;
			continue;
		}
		int cnt = 0;


	}
	return 0;
}
