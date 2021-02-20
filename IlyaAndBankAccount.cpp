#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0) {
        cout << n << "\n";
        return 0;
    }

    int first = n/10;
    int second = n%10 + (n/100)*10;

    if(first >= second) cout << first;
    else cout << second;

    cout << "\n";
}
