#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "11444411";
    //output -> "(11(((4444)))11)"

    int length = s.length();

    int depth = 0;

    for(int i = 0; i < length; i++)
    {
        int digit = s[i] - '0';
        // at any time, depth must be equal to digit.
        while(depth < digit)
        {
            printf("(");
            depth++;
        }
        // at any time, depth must be equal to digit.
        while(depth > digit)
        {
            printf(")");
            depth--;
        }
        printf("%d", digit);
    }

    while(depth--)
        printf(")");
}
