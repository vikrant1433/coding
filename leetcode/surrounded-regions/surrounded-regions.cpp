using namespace std;
#include <bits/stdc++.h>
#define LL long long
#define MOD (1000000000+7)
class Solution {
public:
    int R,C;
    void solve(vector<vector<char>>& B) {
        if (B.size() == 0) {
            return;
        }
        R = B.size();
        C = B[0].size();
        for(int row = 0; row < R; row++) {
            dfs(B, row,0);
            dfs(B, row,C-1);
        }
        for(int col = 0; col < C; col++) {
            dfs(B, 0,col);
            dfs(B, R-1,col);
        }
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                if(B[i][j] == 'O') B[i][j] = 'X';
                if(B[i][j] == '1') B[i][j] = 'O';
            }
        }
    }
    void dfs(vector<vector<char>>& B, int i, int j) {
        if (B[i][j] == 'O') {
            B[i][j]='1';
            if (j+1 < C-1) dfs(B, i,j+1);

            if (j-1 >= 1) dfs(B, i,j-1);

            if (i+1 < R-1) dfs(B, i+1, j);

            if (i-1 >= 1) dfs(B, i-1, j);

        }
    }
};
int main(int argc, char const *argv[]) {

    return 0;
}
