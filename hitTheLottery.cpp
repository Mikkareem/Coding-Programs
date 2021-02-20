// http://codeforces.com/problemset/problem/996/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    vector<int> denominations = {100, 20, 10, 5, 1};
    int n;
    cin >> n;
    int i = 0, coins = 0;
    while(n != 0)
    {
        if(denominations[i] <= n)
        {
            n -= denominations[i];
            coins++;
        }
        else i++;
    }
    cout << coins;
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
