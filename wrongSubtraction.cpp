// http://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < k; i++)
    {
        if(n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n << "\n";
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
