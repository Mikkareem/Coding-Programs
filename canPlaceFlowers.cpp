//LEETCODE 605 pdf
#include<bits/stdc++.h>

using namespace std;

bool canPlaceFlowers(vector<int>& flowers, int k)
{
    int N = (int)flowers.size();

    if(k > N) return false;

    if(N == 1) return flowers[0] == 0;

    for(int i = 0; i < N; i++)
    {
        if(flowers[i] == 0)
        {
            if(i == 0 && i < N - 1 && flowers[i + 1] == 0)
            {
                flowers[i] = 1;
                k--;
            }
            else if(i == N - 1 && i > 0 && flowers[i - 1] == 0)
            {
                flowers[i] = 1;
                k--;
            }
            else if(i < N - 1 && flowers[i + 1] == 0 && i > 0 && flowers[i - 1] == 0)
            {
                flowers[i] = 1;
                k--;
            }
        }

        if(k == 0) break;
    }

    return k == 0;
}

int main()
{
    vector<int> flowers = {1, 0, 0, 0, 1};

    int k = 1;

    cout << canPlaceFlowers(flowers, k);
}
