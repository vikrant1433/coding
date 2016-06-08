using namespace std;
#include <bits/stdc++.h>

int64_t N, W, L;	// N = no. of trees, W = required height, L = minimum height for cuting tree
typedef struct tree {
	int64_t height;
	int64_t rate;
	int64_t month;
} tree;
struct rate_height {
	int64_t rate;
	int64_t height;
};
void set_tree_data(tree* T, int64_t h, int64_t r) {
	T->height = h;
	T->rate = r;

	int64_t m = (int64_t) ceil((L - h) / double(r));
	if (m < 0) {
		m = 0;
	}
	T->month = m;
}
bool cmp(tree T1, tree T2) {
	return T1.month < T2.month;
}

int64_t get_total_height(struct rate_height rh, int64_t m) {
	return rh.height + rh.rate * m;
}
bool cancut(struct tree T [] , int64_t month) {
	int64_t sum = 0;
	for (int i = 0; i < N; ++i) {
		if (sum >= W) {
			return true;
		}
		if (month >= ceil((L - T[i].height) / (double)T[i].rate)) {	// 6 >= 74 - 2 / 9	// overflow can occur if multiplication is used
			sum += T[i].height + month*T[i].rate;
		}
	}
	// cout<<"sum = "<<sum<<endl;
	return sum >= W;
}

int main(int argc, char const *argv[]) {

	cin >> N >> W >> L;
	tree T[N];
	for (int64_t i = 0; i < N; ++i) {
		int64_t h, r;
		cin >> h >> r;
		set_tree_data(&T[i], h, r);
	}


	int64_t  tl = -1;
	int64_t tr = 1;
	while(cancut(T, tr) == false) {
	    tr *= 2;
	    // cout<<"tr = "<<tr<<endl;
	}
	// tl = tr/2;		// not correct as minimum number of waiting months can be 0
	// cout<<"tl = " << tl<<endl;
	int64_t tm = 0;
	while(tr - tl > 1) {
		tm = tr - (tr-tl)/2;
	    if (cancut(T , tm)) {
	    	tr = tm;
	    } else {
	    	tl = tm;
	    }
	    // cout<<"tm = "<<tm<<endl;
	}

	cout<<tl+1<<endl;
	// cout<<"tl = "<<tl<<cancut(T, tl)<<endl;
	// cout<<"tr = "<<cancut(T, tr)<<endl;
	// if (cancut(T, tm)) {
	// cout<<tm<<endl;
	// } else {
	// 	cout<<++tm<<endl;
	// }
	// cout<<"cancut(5) = "<<cancut(T, tm)<<endl;
	// cout<<"cancut(6) = "<<cancut(T, ++tm)<<endl;
	// cout<<"cancut(7) = "<<cancut(T, ++tm)<<endl;
	return 0;
}
