#include<bits/stdc++.h>
using namespace std;

// Longest Subarray having sum 'k'

//input: arr[] = {10, 5, 2, 7, 1, 9}, k = 15
//output: 4 {5, 2, 7, 1}

//input: arr[] = {-5, 8, -14, 2, 4, 12} k = -5
//output: 5 {-5, 8, -14, 2, 4}

int lengthOfLongestSubarray(const vector<int>& arr, int k)
{
	int sum = 0;
	
	unordered_map<int, int> mp;
	
	for(int i = 0; i < (int)arr.size(); i++) {
		// accumulate sum
		sum += arr[i];
		
		// if subarray starts from index '0'
		if(sum == k) maxLen = i+1;
		
		//make an entry in map, if it not already exists
		if(mp.find(sum) == mp.end()) mp[sum] = i;
		
		// check if 'sum-k' exists in map
		if(mp.find(sum-k) != mp.end()) {
			// update maxLen
			if(maxLen < (i - mp[sum-k]))
				maxLen = i - mp[sum-k]
		}
	}
}

int main()
{
	vector<int> arr = {};
	int k = 15;
	cout << lengthOfLongestSubarray(arr, k);
}
