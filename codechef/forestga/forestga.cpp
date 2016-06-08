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

int main(int argc, char const *argv[]) {

	cin >> N >> W >> L;
	tree T[N];
	for (int64_t i = 0; i < N; ++i) {
		int64_t h, r;
		cin >> h >> r;
		set_tree_data(&T[i], h, r);
	}
	sort(T, T + N, cmp);	// N log N

	int64_t cur_month = T[0].month;

	struct rate_height rh = {0 , 0};
	int64_t i = 0;
	while (cur_month == T[i].month) {
		rh.rate += T[i].rate;
		rh.height += T[i].height;
		i++;
	}
	int64_t height_so_far = get_total_height(rh , cur_month);

	while (height_so_far < W) {
		cur_month++;
		while (T[i].month == cur_month) {
			rh.rate += T[i].rate;
			rh.height += T[i].height;
			i++;
		}
		height_so_far = get_total_height(rh, cur_month);
	}
	cout << cur_month << endl;
	return 0;
}
