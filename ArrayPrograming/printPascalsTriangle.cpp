/*
Problem Description
Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.Pascal’s triangle is a pattern in which a number in a row b, is the sum of the number exactly above it a, and the number to the left of a, c.

Input format
One line of input, containing the non negative integer N.

Output format
Print the first N rows of Pascal’s triangle.

Sample Input 1
5

Sample Output 1
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Explanation 1
The number ‘2’ in 3rd row came from the addition of 1 & 1 from the 2nd row.Similarly ‘3’ came from 1+2, 4 from 1+3 and 6 from 3+3.

Constraints
N <= 15
*/

#include <bits/stdc++.h>

using namespace std;

class PascalsTriangle {
public:
    vector<vector<int>> pascalsTriangle(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i=0;i<numRows;i++){
            result[i].resize(i+1); //since rows are uneven length, can resize at fly.
            for(int j=0;j<=i;j++){
                if(i==j || j==0) result[i][j] = 1; 
                else{
                    result[i][j] = result[i-1][j] + result[i-1][j-1];
                }
            }
        }
        return result;
    }
};

int main() {
	int n;
	cin >> n;
	vector<vector<int>> result = PascalsTriangle().pascalsTriangle(n);
	for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}
