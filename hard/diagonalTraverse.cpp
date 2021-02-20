/*
https://leetcode.com/contest/weekly-contest-186/problems/diagonal-traverse-ii/

1424. Diagonal Traverse II

Given a list of lists of integers, nums, return all elements of nums in diagonal order as shown in the below images.
 

Example 1:
Input: nums = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,4,2,7,5,3,8,6,9]


Example 2:
Input: nums = [[1,2,3,4,5],[6,7],[8],[9,10,11],[12,13,14,15,16]]
Output: [1,6,2,8,7,3,9,4,12,10,5,13,11,14,15,16]
Example 3:

Input: nums = [[1,2,3],[4],[5,6,7],[8],[9,10,11]]
Output: [1,4,2,5,3,8,6,9,7,10,11]
Example 4:

Input: nums = [[1,2,3,4,5,6]]
Output: [1,2,3,4,5,6]
 

Constraints:

1 <= nums.length <= 10^5
1 <= nums[i].length <= 10^5
1 <= nums[i][j] <= 10^9
There at most 10^5 elements in nums.
*/

#include<bits/stdc++.h>

using namespace std;

void diagonalTraverse(const vector<vector<int>>& nums)
{
    set<pair<int, int>> visited;

    auto available = [&](int row, int col) {
        return row >= 0 && row < (int)nums.size() && col >= 0 && col < (int)nums[row].size()
                && !visited.count({row, col});
    };

    queue<pair<int, int>> q;
    q.push({0, 0});

    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0; i < size; i++)
        {
            pair<int, int> current = q.front();
            q.pop();

            cout << nums[current.first][current.second] << " ";
            if(available(current.first + 1, current.second))
            {
                q.push({current.first + 1, current.second});
                visited.insert({current.first + 1, current.second});
            }

            if(available(current.first, current.second + 1))
            {
                q.push({current.first, current.second + 1});
                visited.insert({current.first, current.second + 1});
            }
        }
    }
}

int main()
{
    vector<vector<int>> nums = {{1,2,3,4,5},{6,7},{8},{9,10,11},{12,13,14,15,16}};
    //vector<vector<int>> nums = {{1,2,3,4,5,6}};
    diagonalTraverse(nums);
}
