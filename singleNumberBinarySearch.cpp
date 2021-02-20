#include<bits/stdc++.h>

using namespace std;

int singleNumberBinarySearch(const vector<int>& nums)
{
    int length = (int)nums.size();
    if(length == 1) return nums[0];
    
    int left = 0, right = length - 1;
    
    // Boundary Check
    if(nums[left] != nums[left + 1]) return nums[left];
    if(nums[right] != nums[right - 1]) return nums[right];
    
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            return nums[mid];
        
        // If middle == left element
        else if(nums[mid] == nums[mid - 1])
        {
            // mid is odd, then we need to search right part
            if(mid % 2 == 1) left = mid + 1;
            // else left part
            else right = mid - 1;
        }
        
        // If middle == right element
        else if(nums[mid] == nums[mid + 1])
        {
            // mid is even, then we need to search right part
            if(mid % 2 == 0) left = mid + 1;
            // else left part
            else right = mid - 1;
        }
    }
    
    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 7, 7};
    // The input array is always sorted, guaranteed to unique number
    cout << singleNumberBinarySearch(nums);
}

// index->0 1 2 3 4 5 6 7 8
// nums = 1 1 2 3 3 4 4 7 7

// Observation:
// Before the unique element, the pair starts at even position.
// After the unique element, the pair starts at odd position.

// Using the above observation, we can do binary search


//indices ->  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//nums    ->  1 1 2 2 3 3 4 4 6 6  8  8 10 10 12 14 14 15 15 18 18
//            --- --- --- --- ---  ---- ----- ^  ----- ----- -----

// ^    -> unique element
// ---  -> pair

// In the first half, the pair starts at even indices.
// In the second half, the pair starts at odd indices.


