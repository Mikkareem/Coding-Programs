// http://codeforces.com/contest/1351/problem/C

#include<bits/stdc++.h>
using namespace std;

void test_case()
{
    string s;
    cin >> s;
    set<pair<int, int>> visited;
    pair<int, int> person = {0, 0};
    visited.insert(person);
    int time = 0;
    for(char dir: s)
    {
        if(dir == 'N') person.second += 1;
        else if(dir == 'S') person.second -= 1;
        else if(dir == 'E') person.first += 1;
        else if(dir == 'W') person.first -= 1;

        if(visited.count(person))
            time += 1;
        else
            time += 5;

        visited.insert(person);
    }
    printf("%d\n", time);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        test_case();
}
