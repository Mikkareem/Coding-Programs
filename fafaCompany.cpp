// http://codeforces.com/problemset/problem/935/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int total;
    cin >> total;
    int ways = 0;
    for(int leaders = 1; leaders <= total / 2; leaders++)
    {
        int labours = total - leaders;
        if(labours % leaders == 0) ways++;
    }
    cout << ways;
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
