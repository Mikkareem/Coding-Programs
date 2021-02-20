void toggleCase(char* arr, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        arr[i] ^= 32;
    }
}

void lowerCase(char* arr, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        //To set the bit at the 6th position(from LSB)
        //number = number & (1 << 5)
        arr[i] |= 32;
    }
}

void upperCase(char* arr, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        //To unset the bit at the 6th position(from LSB)
        //number = number & (~(1 << 5))
        arr[i] &= ~32;
    }
}
