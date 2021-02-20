// http://codeforces.com/problemset/problem/703/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    int mishka = 0;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a > b) mishka++;
        else if(a < b) mishka--;
    }
    if(mishka == 0)
        printf("Friendship is magic!^^");
    else if(mishka > 0)
        printf("Mishka");
    else
        printf("Chris");
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
