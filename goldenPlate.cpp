// https://codeforces.com/problemset/problem/1031/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int w, h, k;
    cin >> w >> h >> k;

    int ans = 0;

    while(k--)
    {
        ans += (2 * (w - 1)) + (2 * (h - 1));
        w = w - 4;
        h = h - 4;
        if(w < 0 || h < 0) break;
    }

    cout << ans << "\n";
}

int main()
{
    int t = 1;
    while(t--)
        testcase();
}
