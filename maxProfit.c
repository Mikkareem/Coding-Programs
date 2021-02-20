int max_profit_many_transactions(int prices[], int size)
{
    int max_profit = 0;
    for(int i = 0; i < size - 1; i++)
    {
        if(prices[i + 1] > prices[i])
        {
            max_profit += prices[i + 1] - prices[i];
        }
    }
    return max_profit;
}

int max_profit_one_transaction(int prices[], int size)
{
    int max = 0, min = 999999;
    for(int i = 0; i < size; i++)
    {
        if(prices[i] < min)
        {
            min = prices[i];
        }
        else
        {
            int profit = prices[i] - min;
            if(profit > max)
            {
                max = profit;
            }
        }
    }
    return max;
}
