// 1208. Get Equal Substrings Within Budget

// https://leetcode.com/contest/weekly-contest-156/problems/get-equal-substrings-within-budget/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "kbcnnyy", t = "kabnnyy";
    int maxCost = 3;

    int length = s.length();

    int dp[length];

    for(int i = 0; i < length; i++) {
        dp[i] = abs(s[i] - t[i]);
    }

    int left = 0, right = 1, sum = 0, maxi = 0;
    while(left < length && right < length) {
        sum = dp[left];
        while(right < length && sum <= maxCost) {
            sum += dp[right++];
        }
        if(sum > maxCost) right--;
        maxi = max(maxi, right - left);
        left++;
        right = left + 1;
    }

    cout << maxi;
}
