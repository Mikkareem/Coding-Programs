// http://codeforces.com/contest/1352/problem/B

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n, k;
    scanf("%d%d", &n, &k);
    if((n - k + 1) % 2 == 1)
    {
        printf("YES\n");
        for(int i = 0; i < k - 1; i++)
            printf("%d ", 1);
        printf("%d\n", n - k + 1);
    }
    else if((n - 2*k + 2) > 0 && (n - 2*k + 2) % 2 == 0)
    {
        printf("YES\n");
        for(int i = 0; i < k - 1; i++)
            printf("%d ", 2);
        printf("%d\n", n - 2*k + 2);
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) testcase();
}

/*
Consider two cases: when we choose all odd numbers and all even numbers. In both cases let's try to maximize the maximum. So, if we choose odd numbers, let's try to take k−1 ones and the remainder n−(k−1). But we need to sure that n−k+1 is greater than zero and odd. And in case of even numbers, let's try to take k−1 twos and the remainder n−2(k−1). We also need to check that the remainder is greater than zero and even. If none of these cases is true, print "NO".

*/