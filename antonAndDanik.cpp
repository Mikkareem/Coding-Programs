// http://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    cin >> n;
    char s[n];
    int anton = 0;
    for(char& a: s)
    {
        cin >> a;
        if(a == 'A') anton++;
        else anton--;
    }
    if(anton == 0) printf("Friendship");
    else if(anton > 0) printf("Anton");
    else printf("Danik");
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
