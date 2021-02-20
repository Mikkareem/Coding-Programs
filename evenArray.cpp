#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n);

    int missodd = 0, misseven = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if(i % 2 == 0 and a[i] % 2 == 1) misseven++;
        else if(i % 2 == 1 and a[i] % 2 == 0) missodd++;
    }

    if(missodd != misseven) {
        cout << -1 << "\n";
        return;
    }

    cout << missodd << "\n";
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) testcase();
}
