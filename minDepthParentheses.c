

// Each digit in the given string is in that much depth inside the brackets.
// e.g., 3 -> (((3))).
// minimize the no.of brackets.


// input = "0101011" output = "0(1)0(1)0(11)"
// input = "44" output = "((((44))))"
// input = "111000" output = "(111)000"
// input = "3214" output = "(((3)2)1(((4))))"

// Greedy Approach
void minimize_parentheses(char digits[], int size)
{
    int depth = 0;
    for(int i = 0; i < size; i++)
    {
        int digit = digits[i] - '0';
        for(int j = 0; j < max(0, digit - depth); j++)
        {
            printf("(");
        }
        for(int j = 0; j < max(0, depth - digit); j++)
        {
            printf(")");
        }
        printf("%d", digit);
        depth = digit;
    }
    for(int i = 0; i < depth; i++)
    {
        printf(")");
    }
}
