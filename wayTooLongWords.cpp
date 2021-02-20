// https://codeforces.com/problemset/problem/71/A

#include<iostream>
#include<string>

void testcase()
{
    int n;
    std::cin >> n;
    std::string s;
    for(int i = 0; i < n; i++)
    {
        std::cin >> s;
        if(s.length() <= 10)
        {
            std::cout << s << "\n";
        }
        else
        {
            std::cout << s[0] << s.length()-2 << s[s.length() - 1] << "\n";
        }
    }
}

int main()
{
    testcase();
}
