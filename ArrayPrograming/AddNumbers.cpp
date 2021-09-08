/*Problem Description
Add two numbers represented by two arrays A & B and return the resulting sum as an array.

Input format
There are three lines of input.
First line will contain two space separated integers N and M respectively.
Next line will contain N space separated integers for Array A.
Next line will contain M space separated integers for Array B.

Output format
Single integer which will be the sum of the two numbers.

Sample Input 1
4 3
1 1 2 4
4 5 8
Sample Output 1
1582
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> addNumbers(int n, int  m, vector<int > A, vector<int> B){
    vector<int>res;
    int curdigit = 0;
    for(int i=n-1,j=m-1; i>=0 || j>=0; i--,j--){
        if(i>=0){
            curdigit = (curdigit + A[i]);
        }
        if(j>=0)
            curdigit = (curdigit + B[j]);

        res.push_back(curdigit%10);
        curdigit = curdigit / 10;    
    }
    if(curdigit > 0)
        res.push_back(curdigit);
    reverse(res.begin(),res.end());
    return res;
}


int main(){
    int n, m;
    cin>>n>>m;
    vector<int> A(n), B(m);
    for(auto &i: A){
        cin>>i;
    }
    for (auto &i : B)
    {
        cin >> i;
    }
    vector<int>result = addNumbers(n, m, A, B);
    for(int i=0;i<result.size();i++){
        cout<< result[i];
    }
}
