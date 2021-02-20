// Google Code Jam 2020 Round 1A
// p1: Pattern Matching

#include<bits/stdc++.h>

using namespace std;

string get(const string& s, int left, int right)
{
    string result;
    for(int i = left; i <= right; i++)
        result += s[i];
    return result;
}

pair<int, int> getindi(const string& s)
{
    int length = s.length();
    int first = length, last = -1;
    for(int i = 0; i < length; i++)
    {
        if(s[i] == '*')
        {
            first = min(first, i);
            last = max(last, i);
        }
    }
    return make_pair(first, last);
}

bool bad_prefix(string a, string b)
{
    int length = min(a.length(), b.length());
    for(int i = 0; i < length; i++)
    {
        if(a[i] != b[i])
            return true;
    }
    return false;
}

bool bad_suffix(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    return bad_prefix(a, b);
}

string get_middle(const string& s, int left, int right)
{
    string result = "";
    for(int i = left; i <= right; i++)
        if(s[i] != '*')
            result += s[i];

    return result;
}

void testcase()
{
    int n;
    scanf("%d", &n);
    vector<string> they(n);
    for(string& s: they)
        cin >> s;

    pair<int, int> indi = getindi(they[0]);
    string prefix = get(they[0], 0, indi.first - 1);
    string suffix = get(they[0], indi.second + 1, they[0].length() - 1);
    string middle = get_middle(they[0], indi.first + 1, indi.second - 1);

    for(int i = 1; i < they.size(); i++)
    {
        string current = they[i];
        pair<int, int> indices = getindi(current);
        string new_prefix = get(current, 0, indices.first - 1);
        string new_suffix = get(current, indices.second + 1, current.length() - 1);
        if(bad_prefix(prefix, new_prefix) || bad_suffix(suffix, new_suffix))
        {
            cout << "*" << endl;
            return;
        }
        if(prefix.length() < new_prefix.length())
            prefix = new_prefix;
        if(suffix.length() < new_suffix.length())
            suffix = new_suffix;

        middle += get_middle(current, indices.first + 1, indices.second - 1);
    }
    cout << prefix + middle + suffix << endl;
}

int main()
{
    testcase();
}
