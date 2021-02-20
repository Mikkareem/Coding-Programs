// https://codeforces.com/problemset/problem/431/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int a[4], calories = 0;
    for(int& n: a)
        cin >> n;

    string s;
    cin >> s;
    for(char c: s)
    {
        calories += a[c - '0' - 1];
    }
    cout << calories;
}

int main()
{
    testcase();
}
