#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 2;

    int length = (int)nums.size();

    int left = 0, right = length - 1;

    while(left < right)
    {
        int middle = left + (right - left) / 2;

        if(nums[middle] > nums[right])
            left = middle + 1;
        else
            right = middle;
    }

    int pivot = left;

    left = 0;
    right = length - 1;

    if(target >= nums[pivot] && target <= nums[right])
        left = pivot;
    else right = pivot;

    while(left <= right)
    {
        int middle = left + (right - left) / 2;

        if(nums[middle] == target)
        {
            cout << middle;
            return 0;
        }
        else if(nums[middle] < target)
            left = middle + 1;
        else right = middle - 1;
    }

    printf("%d" -1);
}
