// https://codeforces.com/problemset/problem/158/A

// Next Round

#include<iostream>

using namespace std;

void testcase()
{
    int n, k, positive = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)
            positive = i + 1;
    }
    int req = arr[k - 1];
    if(req == 0)
    {
        cout << positive;
        return;
    }

    int index = k;
    while(index < n && arr[index] == req)
        index++;
    cout << index;
}

int main()
{
    testcase();
}
