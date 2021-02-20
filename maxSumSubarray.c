int max(int a, int b)
{
    return a > b ? a : b;
}

int maximum_sum_subarray(int* arr, int size)
{
    int ans = -9999999;//INT_MIN
    int a = 0;
    for(int i = 0; i < size; i++)
    {
        a += arr[i];
        ans = max(ans, a);
        a = max(a, 0);
    }
    return ans;
}


int maximum(int a, int b, int c)
{
    return (a > b && a > c) ? a : (b > c) ? b : c;
}

int crosssum_subarray_dac(int* arr, int left, int mid, int right)
{
    int left_sum = -999999;
    int sum = 0;

    for(int i = mid; i >= left; i--)
    {
        sum += arr[i];
        if(sum > left_sum) left_sum = sum;
    }

    sum = 0;
    int right_sum = -999999;

    for(int i = mid + 1; i <= right; i++)
    {
        sum += arr[i];
        if(sum > right_sum) right_sum = sum;
    }

    return left_sum + right_sum;
}

int max_sum_subarray_dac(int* arr, int left, int right)
{
    if(left == right) return arr[left];

    int mid = left + (right - left) / 2;

    int left_sum = max_sum_subarray_dac(arr, left, mid);
    int right_sum = max_sum_subarray_dac(arr, mid + 1, right);
    int middle_sum = crosssum_subarray_dac(arr, left, mid, right);

    return maximum(left_sum, right_sum, middle_sum);
}
