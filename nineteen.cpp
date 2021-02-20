// https://codeforces.com/contest/393/problem/A

#include<bits/stdc++.h>

using namespace std;

int get(int n)
{
    int a = 5, count = 2;
    while(a < n)
    {
        a += 2;
        count++;
    }
    return count;
}

void testcase()
{
    string s;
    cin >> s;

    int frequency[26];

    for(int& i: frequency)
        i = 0;

    for(char c: s)
        frequency[c - 'a']++;

    //nineteen
    int n = frequency['n' - 'a'];
    int answer = n > 3 && n & 1 == 1 ? get(n) : n / 3;

    answer = min(answer, frequency['i' - 'a']);
    answer = min(answer, frequency['e' - 'a'] / 3);
    answer = min(answer, frequency['t' - 'a']);

    cout << answer;
}

int main()
{
    int t = 1;
    while(t--)
        testcase();
}
