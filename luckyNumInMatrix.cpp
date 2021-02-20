//LEETCODE CONTEST 180
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1,10,4,2},
        {9,3,8,7},
        {15,16,17,12}
    };

    int r = (int)matrix.size();
    int c = (int)matrix[0].size();

    vector<int> columns;
    for(int i = 0; i < c; i++)
    {
        int maximum = 0;
        for(int j = 0; j < r; j++)
        {
            maximum = max(maximum, matrix[j][i]);
        }
        columns.push_back(maximum);
    }

    vector<int> rows;
    for(int i = 0; i < r; i++)
    {
        int minimum = INT_MAX;
        for(int j = 0; j < c; j++)
        {
            minimum = min(minimum, matrix[i][j]);
        }
        rows.push_back(minimum);
    }

    vector<int> result;
    for(int row: rows)
    {
        for(int col: columns)
        {
            if(row == col)
                result.push_back(row);
        }
    }

    for(int r: rows)
        cout << r << " ";
    cout << "\n";
    for(int r: columns)
        cout << r << " ";
    cout << "\n";
    for(int r: result)
        cout << r << " ";
}
