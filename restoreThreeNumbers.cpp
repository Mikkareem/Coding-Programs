// http://codeforces.com/problemset/problem/1154/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    vector<int> arr(4);
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int abc = arr[3];
    int ab = arr[2];
    int bc = arr[1];
    int ca = arr[0];

    int c = abc - ab;
    int b = bc - c;
    int a = ca - c;

    printf("%d %d %d", a, b, c);
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
