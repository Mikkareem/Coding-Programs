// https://codeforces.com/problemset/problem/734/B

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int twos, threes, fives, sixes;
    long long sum = 0;
    cin >> twos >> threes >> fives >> sixes;
    while(twos != 0 && fives != 0 && sixes != 0)
    {
        sum += 256;
        twos--;
        fives--;
        sixes--;
    }
    while(threes != 0 && twos != 0)
    {
        sum += 32;
        twos--;
        threes--;
    }
    printf("%lld", sum);
}

int main()
{
    testcase();
}
