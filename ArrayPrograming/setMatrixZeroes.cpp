/*
Problem Description
Given an m x n matrix, if an element is 0, set its entire row and column to 0.
Do it in-place, that is, modify the same matrix. Do not create a new one.

Input format
First line contains 2 integers m,n - number of rows and columns respectively.
Next m lines contain space separated n integers.

Output format
Output the same matrix.
Sample Input 1
3 3
1 1 1
1 0 1
1 1 1

Sample Output 1
1 0 1
0 0 0
1 0 1

Explanation 1
There is one ‘0’ in the 2nd row and 2nd column, so all the elements in that row and column become 0.

Sample Input 2
3 4
0 1 2 0
3 4 5 2
1 3 1 5

Sample Output 2
0 0 0 0
0 4 5 0
0 3 1 0

Explanation 2
The 1st row, 1st column and 4th column all contain ‘0’, so all the values in these rows & columns become 0.

Constraints
M,N <= 500
*/

#include <bits/stdc++.h>
using namespace std;

class SetMatrixZeroes {
  public:
    void setMatrixZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int rows[m] = {0} ,cols[n] = {0};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i] == 1 || cols[j] == 1){
                    matrix[i][j]=0;
                }
            }
        }

        // for(int i=0;i<n;i++){
        //     if(rows[i]){
        //         for(int j=0;j<m;j++){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // for(int i=0;i<m;i++){
        //     if(cols[i]){
        //         for(int j=0;j<n;j++){
        //             matrix[j][i] = 0;
        //         }
        //     }
        // }
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n,vector<int> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
        cout<<"\n";
    }
    SetMatrixZeroes().setMatrixZeroes(grid);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
