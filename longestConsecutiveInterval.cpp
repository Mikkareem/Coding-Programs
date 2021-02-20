#include<bits/stdc++.h>

using namespace std;

// O(N^2) Approach
pair<int, int> longestConsecutiveInterval(const vector<int>& nums)
{
    map<int, bool> visited;

    for(int num: nums) visited[num] = true;

    int distance = 0, left = 0, right = 0;

    for(int num: nums) {
        int leftNumber = num - 1;
        int rightNumber = num + 1;

        while(visited[leftNumber]) leftNumber -= 1;
        while(visited[rightNumber]) rightNumber += 1;

        int currentDistance = rightNumber - leftNumber;

        if(currentDistance > distance) {
            distance = currentDistance;
            left = leftNumber + 1;
            right = rightNumber - 1;
        }
    }

    return {left, right};
}

int main()
{
    vector<int> nums;

    for(int i = -4; i < 97; i++) nums.push_back(i);

    for(int i = 101; i < 291; i++) nums.push_back(i);

    pair<int, int> interval = longestConsecutiveInterval(nums);

    cout << "[" << interval.first << ", " << interval.second << "]\n";
}
