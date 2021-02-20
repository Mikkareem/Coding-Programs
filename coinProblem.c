//Greedy
int minimum_no_of_coins(int denominations[], int size, int amount)
{
    int number_of_coins = 0;
    int greedy_index = size - 1;
    while(amount > 0 && greedy_index >= 0)
    {
        if(denominations[greedy_index] <= amount)
        {
            printf("%d ", denominations[greedy_index]);
            number_of_coins++;
            amount -= denominations[greedy_index];
        }
        else
        {
            greedy_index--;
        }
    }
    return number_of_coins;
}
