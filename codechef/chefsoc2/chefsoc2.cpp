using namespace std;
#include <bits/stdc++.h>
#define MOD (1000000007)
int T, N, M, s;
int S[1000 + 1];


// void insert_dp (unordered_map<int, int> & m, int key) {
// 	auto it = m.find(key);
// 	if (it == m.end()) {
// 		m.insert(make_pair(key, 1));
// 	} else {
// 		it->second = (it->second + 1) % MOD;
// 	}
// }
// void add_to_unordered_map(unordered_map<int, int> &dest, unordered_map<int, int> & src) {
// 	for (auto it = src.begin(); it != src.end(); ++it) {
// 		// cout << it->first << " => " << it->second << '\n';
// 		auto temp = dest.find(it->first);
// 		if (temp == dest.end()) {
// 			dest.insert(make_pair(it->first, it->second));
// 		} else {
// 			temp->second += it->second;
// 			temp->second %= MOD;
// 		}
// 	}
// }
// void show_map(unordered_map<int,int> & m) {
// 	for (auto it = m.begin(); it != m.end(); it++) {
// 		cout<<it->first << " => " << it->second<<endl;
// 	}
// }
void printArray(int A[], int size) {
	for (int i = 1; i < size; ++i) {
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
int main(int argc, char const *argv[]) {
	// memset(dp, sizeof(int)*(1001*1001),-1);
	cin >> T;
	int D [1001];
	// unordered_map<int, int> dp[1000 + 1][2];
	int dp[1001][1001];
	for (int p = 0; p < T; ++p) {
		// cout<<"test case#"<<p+1<<endl;
		cin >> N >> M >> s;

		// memset(D, 0, sizeof(int) * (N + 1));
		for (int i = 1; i <= M; ++i) {
			cin >> S[i];
		}
		for(unsigned i = 0; i < 1001; ++i) {
			for(unsigned j = 0; j < 1001; ++j) {
				dp[i][j] = 0;
			}
		}

		for (int pass = 0; pass <= M; ++pass) {
			for (int dog = 1; dog <= N; ++dog) {
				if (pass == 0) {
					dp[dog][pass] = (dog == s);
				} else {
					if(dog - S[pass] >= 1) {
						dp[dog - S[pass]][pass]+= dp[dog][pass-1];
						dp[dog - S[pass]][pass] %= MOD; 
					}
					if(dog + S[pass] <= N) {
						dp[dog + S[pass]][pass]+= dp[dog][pass-1];
						dp[dog + S[pass]][pass] = dp[dog + S[pass]][pass]%MOD;
					}
				}
			}
		}

		for(unsigned i = 1; i <= N; ++i) {
			cout<<dp[i][M]<<" ";
		}
		cout<<endl;

		
		// int turn = 0;
		// for (int i = 1; i <= N; ++i) {
		// 	dp[i][turn].clear();
		// 	if (i + S[M] <= N) {
		// 		insert_dp(dp[i][turn], i + S[M]);
		// 	}
		// 	if (i - S[M] >= 1) {
		// 		insert_dp(dp[i][turn], i - S[M]);
		// 	}
		// }



		// cout<<"i : "<<M<<endl;
		// for (int i = 1; i <= N; ++i) {
		// 	show_map(dp[i][turn]);
		// 	cout<<"-------"<<endl;
		// }
		/* test code

		// for (int i = 1; i <= N; ++i) {
		// 	show_map(dp[i][turn]);
		// 	cout<<"-------"<<endl;
		// }
		// turn = 1 - turn;
		// for (int j = 1; j <= N; ++j) {
			
		// 	if (j + S[M-1] <= N) {
		// 		dp[j][turn] = dp[j + S[M-1]][1 ^ turn];
		// 	} else {
		// 		dp[j][turn].clear();	// very important to clear the unordered_map before adding elems to it.
		// 	}
		// 	if (j - S[M-1] >= 1) {
		// 		add_to_unordered_map(dp[j][turn], dp[j - S[M-1]][1 ^ turn]);
		// 	}
		// }
		// for (int i = 1; i <= N; ++i) {
		// 	show_map(dp[i][turn]);
		// 	cout<<"-------"<<endl;
		// }
		end test code */
		// turn = 1 - turn;

		// for (int i = M - 1; i >= 2; --i) {
		// 	for (int j = 1; j <= N; ++j) {
		// 		if (j + S[i] <= N) {
		// 			dp[j][turn] = dp[j + S[i]][1 ^ turn];
		// 		} else {
		// 			dp[j][turn].clear();	// very important to clear the unordered_map before adding elems to it.
		// 		}
		// 		if (j - S[i] >= 1) {
		// 			add_to_unordered_map(dp[j][turn], dp[j - S[i]][1 ^ turn]);
		// 		}
		// 	}
			// cout<<"i : "<<i<<endl;
			// for (int k = 1; k <= N; ++k) {
			// 	show_map(dp[k][turn]);
			// 	cout<<"-------"<<endl;
			// }
		// 	turn = 1 - turn;
		// }

		// if (s + S[1] <= N) {
		// 	dp[s][turn] = dp[s + S[1]][1 ^ turn];
		// } else {
		// 	dp[s][turn].clear();	// very important to clear the unordered_map before adding elems to it.
		// }
		// if (s - S[1] >= 1) {
		// 	add_to_unordered_map(dp[s][turn], dp[s - S[1]][1 ^ turn]);
		// }


		// turn = 1 - turn;
		
		// auto it = dp[s][turn].begin();
		
		// memset(D, sizeof(int) * (N + 1) , 0);
		// for (int i = 1; i <= N; ++i) {
		// 	D[i] = 0;
		// }
		// cout<<"----------D-----------"<<endl;
		// printArray(D,N+1);
		// cout<<"----------D-----------"<<endl;

		// while (it != dp[s][turn].end()) {
		// 	D[it->first] = it->second;
		// 	it++;
		// }
		// for (int j = 1; j <= N; ++j) {
		// 	cout << D[j] << " ";
		// }
		// cout << endl;

		// for (int i = 1; i <= N; ++i) {
		// 	dp[i][0].clear();
		// 	dp[i][1].clear();
		// }

	}
	return 0;
}
