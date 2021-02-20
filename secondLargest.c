int secondLargest(int arr[], int size)
{
    int firstMaximum = 0;
    int secondMaximum = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > firstMaximum)
        {
            secondMaximum = firstMaximum;
            firstMaximum = arr[i];
        }
        else if(arr[i] > secondMaximum)
        {
            secondMaximum = arr[i];
        }
    }
    return secondMaximum;
}
