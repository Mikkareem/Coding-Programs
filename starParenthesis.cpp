#include<bits/stdc++.h>

using namespace std;

int main()
{
    string parenthesis = "(())((())()()(*)(*()(())())())()()((()())((()))(*";
    
    stack<int> openIndices, starIndices;
    
    for(int i = 0; i < parenthesis.length(); i++)
    {
        if(parenthesis[i] == '(')
            openIndices.push(i);
        
        else if(parenthesis[i] == '*')
            starIndices.push(i);
        
        else {
            if(openIndices.empty() && starIndices.empty())
                return false;
            
            if(!openIndices.empty()) openIndices.pop();
            else starIndices.pop();
        }
    }
    
    while(!openIndices.empty() && !starIndices.empty())
    {
        if(openIndices.top() > starIndices.top()) {
            return false;
        }
        
        openIndices.pop();
        starIndices.pop();
    }
    
    return openIndices.empty();
}
