// SUBARRAY SUM EQUALS K

// count the number of sub arrays that sums to k;

#include<bits/stdc++.h>

using namespace std;

// BRUTE FORCE (Time limit exceeded)
int testcase1(vector<int> nums, int k)
{
    int result = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j <= nums.size(); j++)
        {
            int sum = 0;
            for(int k = i; k < j; k++)
            {
                sum += nums[k];
            }
            if(sum == k) result++;
        }
    }
    return result;
}

// Prefix sums [time = O(n^2), space = O(n)]
int testcase2(vector<int> nums, int k)
{
    int length = (int)nums.size();
    int result = 0;
    vector<int> prefix(length);

    prefix[0] = nums[0];

    for(int i = 1; i < length; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    for(int start = 0; start < length; start++)
    {
        for(int end = start + 1; end < length; end++)
        {
            int sum = 0;
            if(start == 0)
                sum += prefix[end];
            else
                sum += prefix[end] - prefix[start - 1];
                // sum(i, j) = sum(j) - sum(i - 1)

            if(sum == k) result++;
        }
    }

    return result;
}

// prefix sum without space [time = O(n^2), space = O(1)]
int testcase3(vector<int> nums, int k)
{
    int length = (int)nums.size();
    int result = 0;

    for(int start = 0; start < length; start++)
    {
        int sum = 0;
        for(int end = start; end < length; end++)
        {
            sum += nums[end];

            if(sum == k) result++;
        }
    }

    return result;
}

/*
The idea behind this approach is as follows: If the cumulative sum(represented by sum[i] for sum upto i th index) upto two indices(i, j) is the same, then sum of those elements lying in between i and j is zero.

Extending the same thought further, if the cumulative sum upto two indices, say i and j is at a difference of k i.e. if sum[i] - sum[j] = k, the sum of elements lying between indices i and j is k.


Based on these thoughts, we make use of a hash map which is used to store the cumulative sum upto all the indices possible along with the number of times the same sum occurs. We store the data in the form: (sum_i, no.of_occurences_of_sum_i) We traverse over the array nums and keep on finding the cumulative sum. Every time we encounter a new sum, we make a new entry in the hash map corresponding to that sum. If the same sum occurs again, we increment the count corresponding to that sum in the hash map. Further, for every sum encountered, we also determine the number of times the sum sum-k has occured already, since it will determine the number of times a sub array with sum k has occured upto the current index. We increment the count by the same amount.

After the complete array has been traversed, the count gives the required result.
*/


// map [time = O(n), space = O(n)]
int testcase4(vector<int> nums, int k)
{
    map<int, int> m;
    m[0] = 1;

    int sum = 0, result = 0;

    for(int n: nums)
    {
        sum += n;

        if(m.find(sum - k) != m.end())
            result += m[sum - k];

        m[sum] += 1;
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 1, 1};
    int k = 2;

    cout << testcase1(nums, k) << " ";
    cout << testcase2(nums, k) << " ";
    cout << testcase3(nums, k) << " ";
    cout << testcase4(nums, k) << " ";
}
