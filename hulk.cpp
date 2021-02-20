// http://codeforces.com/problemset/problem/705/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    int i = 0;
    string s = "";
    while(i < n)
    {
        if(i % 2 == 0)
            s += "I hate ";
        else
            s += "I love ";

        i++;
        if(i != n)
            s += "that ";
    }
    s += "it";

    cout << s;
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
