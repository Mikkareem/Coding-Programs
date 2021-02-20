// Leetcode 1232. Check If it is a straight line.

/*
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

Example1:
Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Example2:
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 

Constraints:

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.
*/

#include<bits/stdc++.h>

using namespace std;

bool checkStraightLine(const vector<vector<int>>& coordinates)
{
	int length = (int)coordinates.size();
	if(length == 2) return true;

	int x1 = coordinates[0][0];
	int y1 = coordinates[0][1];
	int x2 = coordinates[1][0];
	int y2 = coordinates[1][1];

	for(int i = 2; i < length; i++)
	{
		int x = coordinates[i][0];
		int y = coordinates[i][1];

		if((y2 - y1) * (x - x1) != (y - y1) * (x2 - x1))
			return false;
	}

	return true;
}

int main()
{
	vector<vector<int>> coordinates = {
		{1, 2},
		{2, 3},
		{3, 4},
		{4, 5},
		{5, 6},
		{6, 7}
	};

	cout << checkStraightLine(coordinates);
}


/*
Solution
	y = mx + c

		y2 - y1
	m = -------
		x2 - x1

	if all the points are to be in straight line, 
	then slope between any two points is same.

	Algorithm:
	0. if there is only two points, return true.
	1. find the slope between first two points (m1).
	2. for i = 2 to length - 1: (0-based indexing)
			find the slope between ith-point and first point (m2).
			if(m1 != m2) return false
	3. return true.

	m1 = (y2 - y1) / (x2 - x1)

	m2 = (y - y1) / (x - x1)

	if m1 == m2 return true
	else false

	simplify m1 = m2:
		
		(y2 - y1)     (y - y1)
	=>	---------  =  --------
		(x2 - x1)	  (x - x1)

	cross multiply
	------------------------------------------------
	| (y2 - y1) * (x - x1) = (y - y1) * (x2 - x1)  |
	------------------------------------------------

*/