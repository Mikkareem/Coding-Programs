//CODEFORCES 1343 A - Candies

#include<bits/stdc++.h>

using namespace std;

void test_case()
{
    int n;
    scanf("%d", &n);

    for(int i = 2; i < 32; i++)
    {
        int val = (1 << i) - 1;
        if(n % val == 0)
        {
            cout << n / val;
            break;
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        test_case();
}
