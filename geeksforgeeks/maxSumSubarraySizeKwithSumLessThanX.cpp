#include<bits/stdc++.h>
using namespace std;

//Given: K X arr[]

//Task: find the maximum sum among all subarrays of size K with the sum less than X.

//Examples:
//Input: arr[]={20, 2, 3, 10, 5}, K = 3, X = 20
//Output: 18 {3, 10, 5}

int maxSum(vector<int> arr, int k, int x)
{
	int n = arr.size();
	int sum_k = 0;
	
	for(int i = 0; i < k; i++) {
		sum_k += arr[i];
	}
	
	int res = sum_k < x ? sum_k : 0;
	
	for(int i = k; i < n; i++) {
		// important: reducing (i-k)th number and add ith number
		sum_k = sum_k - arr[i-k] + arr[i];
		// equivalent
		//sum_k -= (A[i-k] - A[i]);
		res = max(res, sum_k < x ? sum_k : 0);
	}
	return res;
}

int main()
{
	//vector<int> arr = {20, 2, 3, 10, 5};
	// int k = 3, x = 20;
	vector<int> arr = {-5, 8, 7, 2, 10, 1, 20, -4, 6, 9};
	int k = 5, x = 30; // output: 29
	cout << maxSum(arr, k, x);
}

