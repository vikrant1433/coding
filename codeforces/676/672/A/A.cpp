using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)


LL nth_digit(LL n, LL i) {
	LL rem = -1;
	while (i--) {
		rem = n % 10;
		n /= 10;
	}
	return rem;
}
int main(int argc, char const *argv[]) {
	LL n; cin >> n;
	LL r = 9, tens = 1, i = 1;
	while (1) {
		if (n - i * r <= 0) {
			break;
		}
		n -= i * r;
		i++;
		tens *= 10;
		r = 9 * tens;
	}

	LL digit = (n % i);
	digit += (n%i == 0) ? i : 0; 
	digit = i - digit + 1;
	// cout<<n<<endl;
	// cout<<digit<<endl;
	LL num = tens + ceil(n / (double)i) - 1 ;
	// cout << num << endl;
	cout << nth_digit(num , digit) << endl;
	// cout << tens + n / i - 1 << endl;
	// cout << tens + n - 1 << endl;
	return 0;
}
