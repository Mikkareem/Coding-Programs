// http://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int arr[5][5];
    pair<int, int> one;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
                one = {i + 1, j + 1};
        }
    }

    int moves = abs(one.first - 3) + abs(one.second - 3);
    cout << moves;
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
