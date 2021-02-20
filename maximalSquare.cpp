/*Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Example:

Input: 

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Output: 4(1, 2)->(2, 3);
*/


int maximalSquare(vector<vector<char>>& matrix) {
    int rows = (int)matrix.size();
    if(rows == 0) return 0;
    int cols = (int)matrix[0].size();
    if(cols == 0) return 0;
    
    auto check = [&](int i, int j, int n) {
        
        if(i + n - 1 >= rows || j + n - 1 >= cols) return false;
        
        // check nth row
        int row = i + n - 1;
        int col = j;
        
        while(col <= j + n - 1) {
            if(matrix[row][col] == '0') return false;
            col++;
        }
        
        // check nth col
        row = i;
        col = j + n - 1;
        
        while(row <= i + n - 1) {
            if(matrix[row][col] == '0') return false;
            row++;
        }
        
        return true;
    };
    
    int maximum = 0;
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == '1') {
                int size = 2;
                while(check(i, j, size)) {
                    size++;
                }
                int square_found = size - 1;
                maximum = max(maximum, square_found * square_found);
            }
        }
    }
    
    return maximum;
}