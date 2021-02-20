int peakIndex(int* arr, int size, int left, int right)
{
    //Find index of middle element
    int middle = left + (right - left) / 2;

    //Compare middle element with its neighbors(if neighbors exists)
    if((middle == 0 || arr[middle - 1] <= arr[middle]) &&
       (middle == size - 1 || arr[middle + 1] <= arr[middle]))
    {
        return middle;
    }

    //If middle element is not peak and its
    //left neighbor is greater than middle element
    //then left half must have peak element
    if(middle > 0 && arr[middle - 1] > arr[middle])
        return peakIndex(arr, size, left, middle - 1);

    //If middle element is not peak and its
    //right neighbor is greater than middle element
    //then right half must have peak element
    else return peakIndex(arr, size, middle + 1, right);
}

