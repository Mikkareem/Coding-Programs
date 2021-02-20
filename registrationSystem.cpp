// https://codeforces.com/problemset/problem/4/C

// Registration System

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        mp[temp]++;
        if(mp[temp] == 1)
            cout << "OK\n";
        else
            cout << temp << mp[temp]-1 << "\n";
    }
}

int main()
{
    testcase();
}
