#include<bits/stdc++.h>

using namespace std;

void binary_search(vector<int> nums, int target)
{

    //For this to happen, the input array is sorted....

    int left = 0;
    int right = N - 1;
    int index = 0;

    while(left <= right)
    {
        int middle = left + (right - left) / 2;

        if(nums[middle] < target && middle + 1 < N && nums[middle + 1] > target)
        {
            index = middle;
            break;
        }
        else if(nums[middle] < target)
            left = middle + 1;
        else right = middle - 1;
    }

    if(target - nums[index] <= nums[index + 1] - target)
        printf("%d", nums[index]);
    else printf("%d", nums[index + 1]);
}


void closest_number(vector<int>& nums, int target)
{
    // Time: O(N) -> N is the size of array
    // Space: O(1)
    
    // Input array need not to be sorted,
    // Sorting not required.
    
    int immediate_max = INT_MAX;
    int immediate_min = INT_MIN;

    // target is always lies in between max(all numbers which are less than target in the array)
    // and min(all numbers which are greater than target in the array)
    // i.e.,

    //target belongs to [max(numbers < target), min(numbers > target)]

    for(int n: nums)
    {
        if(n < target)
            immediate_min = max(immediate_min, n);
        else if(n > target)
            immediate_max = min(immediate_max, n);
    }

    if(immediate_min == INT_MIN) printf("%d", immediate_max);

    else if(immediate_max == INT_MAX) printf("%d", immediate_min);

    else if(target - immediate_min < immediate_max - target) printf("%d", immediate_min);

    else printf("%d", immediate_max);
}


int main()
{
    vector<int> nums = {2, 4, 8, 12, 14, 17, 20};
    int N = (int)nums.size();

    int target = 15;
    binary_search(nums, target);
}
