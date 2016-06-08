using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
void printv(vector<int>& v) {
	for (int i = 0; i < v.size(); ++i) cout << v[i] << " ";
	cout << "\n";
}

int N, big_cnt , small_cnt;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

	double median = 0;
	vector<int> & A = nums1;
	vector<int> & B = nums2;

	if (A.size() == 0 && B.size() == 0) {	// case 1: if size of both arrays is zero
		return -1;
	}
	if (A.size() > B.size()) {	// A will always point to smaller array
		A.swap(B);
	}
	// cout<<"A.size() = "<<A.size()<<endl;
	// printv(A);
	// printv(B);
	// return 0;
	if (A.size() == 0) {
		median = B[B.size() / 2];
		if (B.size() % 2 == 0) {
			median += B[B.size() / 2 - 1];
			median /= 2;
		}
		return median;
	}
	N = A.size() + B.size();

	int L1 = 0, R1 = A.size() - 1;
	int L2 = 0, R2 = B.size() - 1;
	int small_cnt , big_cnt;
	small_cnt = big_cnt = N / 2;
	if (N % 2 == 0) {
		small_cnt = big_cnt = (N - 2) / 2;
	}
	while (1) {
		int M1 = (L1 + R1) / 2;
		int M2 = (L2 + R2) / 2;
		printf("L1 = %d M1 = %d R1 = %d  |  L2 = %d M2 = %d R2 = %d small_cnt = %d \n", L1, M1, R1, L2, M2, R2, small_cnt);
		int len_a = R1 - L1  + 1;
		int len_b = R2 - L2  + 1;

		if (len_b < len_a) {
			A.swap(B);
			swap(L1, L2);
			swap(M1, M2);
			swap(R1, R2);
			swap(len_a, len_b);
		}
		if (len_a == 0) {			//case 2: if array A is empty, return median of array B

			median = B[len_b / 2];
			if (len_b % 2 == 0) {
				median += B[(len_b / 2) - 1];
				median /= 2.0;
			}
			return median;
		}
		if (len_b == 0) {
			median = A[len_a / 2];
			if (len_a % 2 == 0) {
				median += A[(len_a / 2) - 1];
				median /= 2.0;
			}
			return median;
		}

		if (len_a <= 2) {
			int m = len_b / 2;
			vector<int> rem(A.begin() + L1, A.begin() + L1 + len_a);
			small_cnt -= L1;
			// printv(rem);
			if (len_b >= 4) {
				if (len_a == 1) {
					if (len_b % 2 == 1) {	// len of A = 1, B  = odd

						rem.insert(rem.end(), B.begin() + L2 + m - 1, B.begin() + L2 + m + 1 + 1);		// Bm-1, Bm, Bm+1
						small_cnt -= L2 + m - 1;
					} else {					// len of A = 1,  B = even
						rem.insert(rem.end(), B.begin() + L2 + m - 1, B.begin() + L2 + m + 1);	// Bm-1, Bm
						small_cnt -= L2 + m - 1;
					}
				}
				if (len_a == 2) {
					if (len_b % 2 == 1) {	// len of A = 2, B  = odd
						rem.insert(rem.end(), B.begin() + L2 + m - 1, B.begin() + L2 + m + 1 + 1);		// Bm-1, Bm, Bm+1
						small_cnt -= L2 + m - 1;
					} else {					// len of A = 2,  B = even
						rem.insert(rem.end(), B.begin() + L2 + m - 2, B.begin() + L2 + m + 1 + 1);	// Bm-2, Bm, Bm+1
						small_cnt -= L2 + m - 2;
					}
				}

				// int len = rem.size();
				// if (len % 2 == 0) {
				// 	median = rem[len / 2];
				// 	median += rem[len / 2 - 1];
				// 	median /= 2;
				// } else {
				// 	median = rem[len / 2];
				// }
				// return median;
			} else {
				rem.insert(rem.end(), B.begin() + L2, B.end());
				small_cnt -= L2;
			}
			printf("small_cnt = %d\n", small_cnt);
			sort(rem.begin(), rem.end());
			// printf("rem.size() = %lu\n",rem.size());
			printv(rem);
			median = rem[small_cnt];
			if (N % 2 == 0) {
				median += rem[small_cnt + 1];
				median /= 2;
			}
			// int len = rem.size();
			// if (len % 2 == 0) {
			// 	median = rem[len / 2];
			// 	median += rem[len / 2 - 1];
			// 	median /= 2;
			// } else {
			// 	median = rem[len / 2];
			// }
			return median;
		}

		if (A[M1] <= B[M2]) {
			// big_cnt -= (R1 - M1);

			int ignore  = M1 - L1;
			L1 = M1;		// ignore left part of A

			// big_cnt -= (R2 - M2);
			// R2 = M2
			R2 -= (R2 - ignore);		// ignore right part of B

		} else {

			// A[M1] < B[M2]
			// int ignore = L1 + (R1 - L1 + 1)/2 + 1;
			// small_cnt -= (M1 - L1);
			R1 = (R1 - L1 +1)/2;	// ignore right part of A

			// small_cnt -= (M2 - L2);
			// L2 = M2;	// ignore left part of B
			L2 = (L2 + );


		}

	}
}


int main(int argc, char const *argv[]) {
	string sv1, sv2;
	getline(cin, sv1);
	getline(cin, sv2);

	stringstream ss1(sv1);
	stringstream ss2(sv2);
	vector<int> v1  ;
	vector<int> v2 ;
	int n;
	while (ss1 >> n) {
		v1.push_back(n);
	}
	while (ss2 >> n) {
		v2.push_back(n);
	}

	cout << findMedianSortedArrays(v1, v2) << endl;
	// for (int i = 0; i < v1.size(); ++i) cout<<v1[i]<<" ";
	// cout<<"\n";
	// for (int i = 0; i < v2.size(); ++i) cout<<v2[i]<<" ";
	// cout<<"\n";

	return 0;
}
