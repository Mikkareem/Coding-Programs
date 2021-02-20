// http://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    scanf("%d", &n);
    bool hard = false;
    int k;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        if(k == 1)
            hard = true;
    }

    hard ? printf("Hard") : printf("Easy");
}

int main()
{
    int t = 1;
    while(t--)
        testcase();
}
