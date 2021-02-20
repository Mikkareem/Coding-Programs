// https://codeforces.com/problemset/problem/1/A

// Theatre Square

#include<iostream>

void testcase()
{
    long long n, m, a;
    std::cin >> n >> m >> a;
    // answer = ceil(n/a) * ceil(m/a)
    // ceil(x) is a number which is greater than or equal to x.
    std::cout << ((m+a-1)/a)*((n+a-1)/a);
}

int main()
{
    testcase();
}

/*
The constraint that edges of each flagstone much be parralel to edges of the square allows to analyze X and Y axes separately, that is, how many segments of length 'a' are needed to cover segment of length 'm' and 'n' -- and take product of these two quantities. Answer = ceil(m/a) * ceil(n/a), where ceil(x) is the least integer which is above or equal to x. Using integers only, it is usually written as ((m+a-1)/a)*((n+a-1)/a). Note that answer may be as large as 10^18, which does not fit in 32-bit integer.
*/