#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {256, 312, 314, 453, 312, 312, 312, 312, 312, 312, 462, 312, 312};
    int N = (int)nums.size();
    int result = 0;

    for(int i = 0; i < 32; i++)
    {
        int count = 0;
        for(int n: nums)
        {
            if((n & (1 << i)) != 0)
                count++;
        }
        if(count > N / 2)
            result |= (1 << i);
    }

    printf("%d", result);
}
