#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    long long pile1 = 1 << n;
    long long pile2 = 0;
    for(int i = 1; i < n; i++)
    {
        if(i < n / 2) pile1 += (1 << i);
        else pile2 += (1 << i);
    }
    cout << abs(pile1 - pile2) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        testcase();
}
