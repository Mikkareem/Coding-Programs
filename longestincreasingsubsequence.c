int lengthOfLongestIncreasingSubsequence(int* arr, int size)
{
    int dp[size];
    for(int i = 0; i < size; i++) {
        dp[i] = 1; // Length of LIS of length 1 is always 1.
    }

    for(int i = 1; i < size; i++) {
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j] && dp[i] <= dp[j]) {
                dp[i] = 1 + dp[j];//Include to the subsequence
            }
        }
    }

    int longest = 0;
    for(int i = 0; i < size; i++) {
        if(dp[i] > longest) {
            longest = dp[i];
        }
    }

    return longest;
}

