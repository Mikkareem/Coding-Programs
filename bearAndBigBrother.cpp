// http://codeforces.com/problemset/problem/791/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int a, b;
    cin >> a >> b;
    int year = 0;

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        year++;
    }

    cout << year;
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
