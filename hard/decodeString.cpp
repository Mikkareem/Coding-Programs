// Decode String

// INPUT 1: 4(AB2(CD)EF3(GH))

// OUTPUT 1: ABCDCDEFGHGHGHABCDCDEFGHGHGHABCDCDEFGHGHGHABCDCDEFGHGHGH

// INPUT 2: XZ3(AB2(CD3(EF))3(GH))

// OUTPUT 2: XZABCDEFEFEFCDEFEFEFGHGHGHABCDEFEFEFCDEFEFEFGHGHGHABCDEFEFEFCDEFEFEFGHGHGH

// INPUT 3: 12(AB3(C))

// OUTPUT 3: ABCCCABCCCABCCCABCCCABCCCABCCCABCCCABCCCABCCCABCCCABCCCABCCC

#include<bits/stdc++.h>

using namespace std;

void testcase()
{
    string s;
    cin >> s;

    string result;

    stack<string> res;
    stack<int> times;

    int i = 0;
    while(i < s.length()) {
        if(s[i] - '0' >= 0 and s[i] - '0' <= 9)
        {
            int count = 0;
            while(s[i] - '0' >= 0 and s[i] - '0' <= 9)
            {
                count = 10 * count + (s[i] - '0');
                i++;
            }
            times.push(count);
        }
        else if(s[i] == '(')
        {
            res.push(result);
            result = "";
            i++;
        }
        else if(s[i] == ')')
        {
            string temp = res.top();
            res.pop();
            int count = times.top();
            times.pop();

            while(count--)
            {
                temp += result;
            }
            result = temp;
            i++;
        }
        else
        {
            result.push_back(s[i]);
            i++;
        }
    }

    cout << result;
}

int main()
{
    testcase();
}
