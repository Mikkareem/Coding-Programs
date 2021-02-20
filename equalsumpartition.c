int sum(int* arr, int left, int right)
{
    int result = 0;
    while(left <= right)
    {
        result += arr[left];
        left++;
    }
    return result;
}

int equalPartition(int* arr, int size, int left, int right)
{
    if(left > right) return -1;

    int mid = left + (right - left) / 2;

    int left_sum = sum(arr, 0, mid);
    int right_sum = sum(arr, mid + 1, size - 1);

    if(left_sum == right_sum) return mid;

    if(left_sum > right_sum) return equalPartition(arr, size, left, mid - 1);
    else return equalPartition(arr, size, mid + 1, right);
}
