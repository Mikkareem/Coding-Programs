#include<bits/stdc++.h>

using namespace std;

int bulbSwitcherIII(vector<int>& lights)
{
    int n = lights.size();
    vector<bool> on(n, false);
    int res = 0, blue = 0;
    for(int i = 0; i < n; i++)
    {
        on[lights[i] - 1] = true;
        while(blue < n && on[blue])
            blue++;
        res += (blue == i + 1);
    }
    return res;
}

int main()
{
    vector<int> lights = {2, 1, 4, 3, 6, 5};

    cout << bulbSwitcherIII(lights);
}
