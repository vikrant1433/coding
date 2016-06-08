using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
bool between(int x, int l, int h) {
	return l <= x && x <= h;
}
int main(int argc, char const *argv[]) {
	int n ; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];


	int l = 0 , r = n - 1;
	while (a[l] > a[r]) {
		int m = r - (r - l) / 2;
		if (a[m] > a[r]) {
			l = m + 1;
		}else {
			r = m;
		}
	}
	cout<<l<<endl;
	//rotate(begin(a) , begin(a) +3 , end(a));
	// int x = 5;
	// int l = 0, h = n-1;
	// int m;
	// while(l <= h) {
	// 	m = h - (h-l)/2;
	// 	if(a[m] == x) { break;;};
	// 	if (a[l] < a[m]) {
	// 		if (between(x,a[l], a[m])) {
	// 			h = m -1; // left
	// 		}else {
	// 			l = m + 1; // right
	// 		}
	// 	}else {
	// 		if (between(x,a[m],a[h])) {
	// 			l = m + 1; // right
	// 		} else {
	// 			h = m -1 ; // left
	// 		}
	// 	}
	// }
	// cout<<m<<endl;
	return 0;
}
