// http://codeforces.com/problemset/problem/1097/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    string table;
    cin >> table;

    bool yes = false;

    string hands[5];
    for(string& hand: hands)
    {
        cin >> hand;
        if(hand[0] == table[0] || hand[1] == table[1])
            yes = true;
    }

    if(yes) printf("YES");
    else printf("NO");
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
