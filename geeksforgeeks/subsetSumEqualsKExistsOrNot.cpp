#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(const vector<int>& arr, int n, int req_sum)
{
	// required sum found
	if(req_sum == 0) return true;
	
	// entire array traversed, we don't find the required sum
	if(n == 0) return false;
	
	// if the last element is greater than req_sum, then exclude it
	if(arr[n-1] > req_sum) return isSubsetSum(arr, n-1, req_sum);
	
	// else, check if sum can be obtained by any of the following
	// 1) including the last element
	// 2) excluding the last element
	return isSubsetSum(arr, n-1, req_sum-arr[n-1]) || isSubsetSum(arr, n-1, req_sum);
}

bool isSubsetSumMemo(vector<vector<int>>& memo, const vector<int>& arr, int n, int req_sum)
{
	if(req_sum == 0) return true;
	
	if(n == 0) return false;
	
	if(arr[n-1] > req_sum) return memo[n][req_sum] = isSubsetSumMemo(memo, arr, n-1, req_sum);
	
	return memo[n][req_sum] = isSubsetSumMemo(memo, arr, n-1, req_sum-arr[n-1]) ||
								isSubsetSumMemo(memo, arr, n-1, req_sum);
}

bool isSubsetSumDP(const vector<int>& arr, int n, int sum)
{
	
}

int main()
{
	vector<int> arr = {3, 34, 4, 12, 5, 2};
	int sum = 9;
	if(isSubsetSum(arr, (int)arr.size(), sum)) {
		cout << "Found";
	} else {
		cout << "Not Found";
	}
}

