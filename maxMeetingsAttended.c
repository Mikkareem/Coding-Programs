
//    int schedule[][2] = {{0, 6}, {3, 4}, {1, 2}, {5, 9}, {5, 7}, {8, 9}};
//    Activity activities[6];
//    for(int i = 0; i < 6; i++)
//    {
//        activities[i].start = schedule[i][0];
//        activities[i].finish = schedule[i][1];
//    }

struct Activity
{
    int start;
    int finish;
};

typedef struct Activity Activity;

void sort(Activity activities[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(activities[i].finish > activities[j].finish)
            {
                Activity temp = activities[i];
                activities[i] = activities[j];
                activities[j] = temp;
            }
        }
    }
}

int activities_attended(Activity activities[], int size)
{
    sort(activities, 6);
    int num_activities = 1;
    int current_activity_index = 0;
    int next_activity_index = 1;
    while(next_activity_index < size)
    {
        int current = current_activity_index;
        int next = next_activity_index;
        if(activities[current].finish <= activities[next].start)
        {
            num_activities++;
            current_activity_index = next_activity_index;
        }
        next_activity_index++;
    }
    return num_activities;
}
