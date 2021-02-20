//LEETCODE CONTEST 185
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "covid2019"; //output = c2o0v1i9d
    int total = s.length();

    vector<int> numbers, alphas;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a')
            alphas.push_back(i);
        else
            numbers.push_back(i);
    }

    int a = alphas.size();
    int n = numbers.size();

    if(!a || !n || abs(a - n) > 1)
    {
        printf("No");
        return 6;
    }

    string result = "";
    int indexa = 0, indexn = 0;

    if(a >= n)
    {
        bool al = true;

        while(result.length() != total)
        {
            if(al) result += s[alphas[indexa++]];
            else result += s[numbers[indexn++]];

            al = !al;
        }
    }
    else
    {
        bool al = false;

        while(result.length() != total)
        {
            if(al) result += s[alphas[indexa++]];
            else result += s[numbers[indexn++]];

            al = !al;
        }
    }

    cout << result;
}
