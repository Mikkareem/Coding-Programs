// http://codeforces.com/problemset/problem/785/A

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    scanf("%d", &n);
    string s[n];
    for(string& a: s)
        cin >> a;

    int faces = 0;

    for(string a: s)
    {
        if(a == "Tetrahedron")
            faces += 4;
        else if(a == "Cube")
            faces += 6;
        else if(a == "Octahedron")
            faces += 8;
        else if(a == "Dodecahedron")
            faces += 12;
        else if(a == "Icosahedron")
            faces += 20;
    }

    cout << faces;
}

int main()
{
    int t = 1;
    while(t--) testcase();
}
