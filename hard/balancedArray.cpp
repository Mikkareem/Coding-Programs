// https://codeforces.com/problemset/problem/1343/B

// Balanced array

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    if((n / 2) % 2 == 1)
    {
        printf("NO\n");
        return;
    }

    printf("YES\n");
    int odd = 1, even = 2;
    for(int i = 1; i < n; i++)
    {
        if(i <= n/2) {
            printf("%d ", even);
            even += 2;
        }
        else {
            printf("%d ", odd);
            odd += 2;
        }
    }

    printf("%d\n", n + n/2 - 1);
}

int main()
{
    int t;
    cin >> t;
    while(t--) testcase();
}
