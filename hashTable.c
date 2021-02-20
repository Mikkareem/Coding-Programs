#include<stdio.h>
int size;
typedef struct _
{
    int key;
    int value;
    struct _ *next;
} Pair;

void display(Pair pairs[])
{
    for(int i = 0; i < size; i++)
    {
        printf("%d %d\n", pairs[i].value, pairs[i].key);
        Pair* temp = pairs[i].next;
        while(temp != NULL)
        {
            printf("%d %d\n", temp->value, temp->key);
            temp = temp->next;
        }
    }
}

Pair* newPair(int val, int key)
{
    Pair* pair = (Pair*)malloc(sizeof(Pair));
    pair->value = val;
    pair->key = key;
    pair->next = NULL;
    return pair;
}

int search(Pair pairs[], int val)
{
    int hash = val % size;
    Pair* temp = &pairs[hash];
    while(temp != NULL)
    {
        if(temp->value == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void insert(Pair pairs[], int val)
{
    if(search(pairs, val))
    {
        printf("Duplicates not allowed %d\n", val);
        return;
    }

    int hash = val % size;
    if(pairs[hash].value == -1)
    {
        pairs[hash].value = val;
        pairs[hash].key = hash;
        pairs[hash].next = NULL;
    }
    else
    {
        Pair* new_pair = newPair(val, hash);
        Pair* temp = &pairs[hash];
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_pair;
    }
}

