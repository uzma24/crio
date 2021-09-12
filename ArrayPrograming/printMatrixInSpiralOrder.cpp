/*
Problem Description
Given an integer A, generate a square matrix filled with elements from 1 to A*A in spiral order. The spiral order will be clockwise in nature starting from (0,0)

Input format
One line of input, containing a single integer A.

Output format
Print a 2-d matrix of size A x A satisfying the spiral order.

Sample Input 1
3
Sample Output 1
1 2 3
8 9 4
7 6 5

Explanation
As you can see the matrix goes spirally with each next position incremented by one.
*/

#include <bits/stdc++.h>
using namespace std;

bool conditionFail(pair<int, int > &pos, vector<vector<int>> &matrix, int &n){
    int x = pos.first, y = pos.second;
    if(x >= n || x < 0 || y >= n || y < 0)
        return true;
    if (matrix[x][y] != 0)
        return true;
    return false;
}  
//         top
//      ---------
//      |       |
//  Left|       |Right
//      |       |
//      |       |
//      ---------
//        bottom
vector<vector<int>>spiralMatrixII(int n){
    vector<vector<int>> mat(n, vector<int>(n));
    int count=0;
    int left = 0, top = 0, right = n, bottom = n;//to maintain the boundaries of the matrix
    
    while(left<right && top<bottom ){
        for(int i=left; i<right; i++){
            mat[top][i] = ++count;
        }
        top++;

        for(int i=top;i<bottom;i++){
            mat[i][right-1] = ++count;
        }
        right--;

        if(top<bottom)
        for(int i=right-1;i>=left;i--){
            mat[bottom-1][i] = ++count;
        }
        bottom--;
        
        if(left<right)
        for(int i=bottom-1;i>=top;i--){
            mat[i][left] = ++count;
        }
        left++;
    }
    return mat;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int> > result = spiralMatrixII(n);
    for(auto &row: result){
        for(auto &element: row){
            cout<<element<<" ";
        }
        cout<<"\n";
    } 
}
