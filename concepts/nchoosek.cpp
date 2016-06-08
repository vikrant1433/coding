using namespace std;

#include <bits/stdc++.h>
#define size_of(x) (sizeof(x)/sizeof(*x))
int n = 5;
int k = 3;
vector<int> D;
int A[] = {1,2,3,4,5};

void print() {
	for(int i = 0; i < D.size(); ++i) {
		cout<<D[i]<<" ";
	}
	cout<<"\n";
}
void C(int start, int k) {
	if(k == 0) {
		print();
		return ;
	}
	for(unsigned i = start; i <= n - k; ++i) {
		D.push_back(A[i]);
		C(i+1,k-1);
		D.pop_back();
	}
}

int main(int argc, char const *argv[]) {
	
	n = size_of(A);
	C(0,k);
	return 0;
}