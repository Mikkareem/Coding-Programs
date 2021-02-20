//LEETCODE BIWEEKLY CONTEST 23 EASY
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    map<int, vector<int>> m;
    int max_size = -1;

    for(int i = 1; i <= n; i++)
    {
        int num = i, sum = 0;

        while(num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        m[sum].push_back(i);
        max_size = max(max_size, (int)m[sum].size());
    }

    int count = 0;

    for(auto p: m)
    {
        if((int)p.second.size() == max_size) count++;
    }

    printf("%d", count);
}
