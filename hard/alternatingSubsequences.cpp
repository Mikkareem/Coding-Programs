// https://codeforces.com/problemset/problem/1343/C

// Alternating subsequence

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& a: arr)
        cin >> a;

    long long sum = 0;
    int i = 0;

    while(i < n)
    {
        int num = INT_MIN;
        if(arr[i] < 0)
        {
            while(i < n && arr[i] < 0)
            {
                num = max(num, arr[i]);
                i++;
            }
        }
        else
        {
            while(i < n && arr[i] > 0)
            {
                num = max(num, arr[i]);
                i++;
            }
        }
        sum += num;
    }

    cout << sum << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        testcase();
}
