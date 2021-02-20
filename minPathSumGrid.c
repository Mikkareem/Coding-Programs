

int min(int a, int b)
{
    return a < b ? a : b;
}

// Minimum path sum from top-left to bottom-right
// (right, bottom directions only)
int minimum_path_sum_grid(int rows, int columns, int grid[][columns])
{
    int dp[rows][columns];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            dp[i][j] = 0;
        }
    }
    dp[0][0] = grid[0][0];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(i == 0 && j == 0) continue;

            if(i == 0 || j == 0)
                if(i == 0) dp[i][j] = grid[i][j] + dp[i][j - 1];
                else dp[i][j] = grid[i][j] +  dp[i - 1][j];
            else dp[i][j] = grid[i][j] +  min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[rows - 1][columns - 1];
}
