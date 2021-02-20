int numberOfPaintersRequired(int arr[], int size, int time)
{
    int numberOfPainters = 1;
    int timeTakenByPainter = 0;

    for(int i = 0; i < size; i++)
    {
        timeTakenByPainter += arr[i];
        if(timeTakenByPainter > time)
        {
            numberOfPainters++;
            timeTakenByPainter = arr[i];
        }
    }

    return numberOfPainters;
}

int painting(int* arr, int size, int painters)
{
    int minimum_time = 0, maximum_time = 0;
    for(int i = 0; i < size; i++)
    {
        if(minimum_time < arr[i]) minimum_time = arr[i];
        maximum_time += arr[i];
    }

    int min_possible_time = 0;

    while(minimum_time <= maximum_time)
    {
        int midtime = minimum_time + (maximum_time - minimum_time) / 2;

        if(numberOfPaintersRequired(arr, size, midtime) <= painters)
        {
            min_possible_time = midtime;
            maximum_time = midtime - 1;
        }
        else
        {
            minimum_time = midtime + 1;
        }
    }
    return min_possible_time;
}
