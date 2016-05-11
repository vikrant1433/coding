using namespace std;
#include <bits/stdc++.h>
int x;
int solve() {
	cout<<1<<endl;
	cout<<"3 1 1 2" <<endl;
	cout<<"3 4 4 5" <<endl;
	cin>>x;
	switch(x) {
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 1;
		case -1:
			return 5;
		case -2:
			return 4;
	}
}

int main(int argc, char const *argv[]) {
	
	int ans = solve();
	cout<<2<<"\n"<<ans<<endl;
	
	return 0;
}