#include<bits/stdc++.h>

using namespace std;

struct suffix
{
    int index;
    string suff;
};

int compareTo(string a, string b)
{
    //cout << a << " " << b;
    int length = min(a.length(), b.length());
    int i;
    for(i = 0; i < length; i++)
    {
        if(a[i] > b[i]) return 1;
        if(a[i] < b[i]) return -1;
    }

    if(i == a.length() && i == b.length()) return 0;

    if(i == a.length()) return -1;

    if(i == b.length()) return 1;
}

void sortSuffix(vector<suffix>& suffixes)
{
    for(int i = 0; i < (int)suffixes.size(); i++)
    {
        for(int j = i + 1; j < (int)suffixes.size(); j++)
        {
            if(compareTo(suffixes[i].suff, suffixes[j].suff) == 1)
            {
                suffix temp = suffixes[i];
                suffixes[i] = suffixes[j];
                suffixes[j] = temp;
            }
        }
    }
}

vector<int> buildSuffixArray(string s)
{
    int length = s.length();
    vector<suffix> suffixes(length);
    for(int i = 0; i < length; i++)
    {
        suffixes[i].index = i;
        suffixes[i].suff = s.substr(i);
    }

    sortSuffix(suffixes);

    vector<int> suffArr(length);

    for(int i = 0; i < length; i++)
    {
        suffArr[i] = suffixes[i].index;
    }

    return suffArr;
}

int main()
{
    string s = "banana";
    vector<int> suffArr = buildSuffixArray(s);

    for(int i: suffArr)
        cout << i << " ";
}
