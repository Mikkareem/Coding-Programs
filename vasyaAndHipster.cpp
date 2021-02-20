// http://codeforces.com/problemset/problem/581/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int a, b;
    cin >> a >> b;
    int pairs_diff = min(a, b);
    int remaining = abs(a - b);
    int pairs_same = 0;
    if(remaining >= 2)
        pairs_same += remaining / 2;

    cout << pairs_diff << " " << pairs_same;

}

int main()
{
    int t = 1;
    while(t--) testcase();
}
