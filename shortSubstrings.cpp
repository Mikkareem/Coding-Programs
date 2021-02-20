#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    string a, b;
    cin >> b;

    int length = b.length();

    for(int i = 0; i < length; i++) {
        if(i == 0 or i == length - 1) {
            a.push_back(b[i]);
            continue;
        }

        a.push_back(b[i]);
        i++;
    }
    cout << a << "\n";
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) testcase();
}
