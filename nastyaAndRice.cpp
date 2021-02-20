// http://codeforces.com/problemset/problem/1341/A

// A. Nastya and Rice.

// Solution is whether [n(a-b), n(a+b)] range is intersect with [c-d, c+d];

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    pair<int, int> total = {c - d, c + d};
    pair<int, int> weights = {n * (a - b), n * (a + b)};

    if(weights.first >= total.first && weights.first <= total.second ||
       weights.second >= total.first && weights.second <= total.second)
        printf("Yes");
    else
        printf("No");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        testcase();
}

/*
Nastya just made a huge mistake and dropped a whole package of rice on the floor. Mom will come soon. If she sees this, then Nastya will be punished.

In total, Nastya dropped n grains. Nastya read that each grain weighs some integer number of grams from a−b to a+b, inclusive (numbers a and b are known), and the whole package of n grains weighs from c−d to c+d grams, inclusive (numbers c and d are known). The weight of the package is the sum of the weights of all n grains in it.

Help Nastya understand if this information can be correct. In other words, check whether each grain can have such a mass that the i-th grain weighs some integer number xi (a−b≤xi≤a+b), and in total they weigh from c−d to c+d, inclusive (c−d≤sum(Xi)≤c+d). where i belongs to [1, n];


Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤1000)  — the number of test cases.

The next t lines contain descriptions of the test cases, each line contains 5 integers: n (1≤n≤1000)  — the number of grains that Nastya counted and a,b,c,d (0≤b<a≤1000,0≤d<c≤1000)  — numbers that determine the possible weight of one grain of rice (from a−b to a+b) and the possible total weight of the package (from c−d to c+d).

Output
For each test case given in the input print "Yes", if the information about the weights is not inconsistent, and print "No" if n grains with masses from a−b to a+b cannot make a package with a total mass from c−d to c+d.

input:
5
7 20 3 101 18
11 11 10 234 2
8 9 7 250 122
19 41 21 321 10
3 10 8 6 1

output
Yes
No
Yes
No
Yes
*/
