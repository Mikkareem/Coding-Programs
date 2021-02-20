#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n, k;
    scanf("%d%d", &n, &k);
    string s;
    cin >> s;

    int tableCanBeOccupied = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            bool can = true;
            for(int j = 1; j <= k; j++) {
                if((i - j >= 0 and s[i - j] == '1') or (i + j < n and s[i + j] == '1')) {
                    can = false;
                    break;
                }
            }
            if(can) {
                s[i] = '1';
                tableCanBeOccupied++;
            }
        }
    }
    cout << tableCanBeOccupied << "\n";
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) testcase();
}
