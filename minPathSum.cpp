#include<bits/stdc++.h>

using namespace std;

int minPathSum(vector<vector<int>>& grid)
{
    int R = (int)grid.size();
    int C = (int)grid[0].size();

    vector<vector<int>> dp(R, vector<int>(C, 0));
    dp[0][0] = grid[0][0];

    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(i == 0 && j == 0) continue;

            if(j == 0)
                dp[i][j] = dp[i - 1][j] + grid[i][j];

            else if(i == 0)
                dp[i][j] = dp[i][j - 1] + grid[i][j];

            else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }

    return dp[R - 1][C - 1];
}

int main()
{
    vector<vector<int>> grid = {
        {1, 3, 1},
        {1, 5, 1}, 
        {4, 2, 1}
    };
    
    cout << minPathSum(grid);
}
