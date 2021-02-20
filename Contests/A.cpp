#include<bits/stdc++.h>
using namespace std;

// Maximum Sum Subarray having sum less than or equal to given 'sum'

//input: arr[] = {1, 2, 3, 4, 5}, sum = 11
//output: 10 {1, 2, 3, 4}

int maxSumSubarray(const vector<int>& arr, int sum)
{
	//n -> sizeof(arr)
	//Initialise start->0 end->0
	//Initialise curr_sum->0
	
	int n = (int)arr.size(), start = 0, end = 0, curr_sum = 0, res = 0;
	
	while(end < n) {
		//increment end until we get curr_sum >= sum
		//increment start until we get curr_sum <= sum or start == end
		
		while(end < n && curr_sum < sum) {
			curr_sum += arr[end];
			res = max(res, curr_sum<sum ? curr_sum : 0);
			end++;
		}
		
		while(start < end && curr_sum >= sum) {
			curr_sum -= arr[start];
			res = max(res, curr_sum<sum ? curr_sum : 0);
			start++;
		}
	}
	
	return res;
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5};
	int sum = 11;
	vector<int> arr1 = {6, 8, 9};
	int sum1 = 20;
	cout << maxSumSubarray(arr1, sum1);
}
