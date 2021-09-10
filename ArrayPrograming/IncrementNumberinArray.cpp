/*
Problem Description
Given a number represented as an array of digits, increment the number by 1, and return the resulting sum as an array.

Input format
There are two lines of input.
First line will contain a single integer N .
Next line will contain N space separated integers for Array A.

Output format
Single integer which will be the incremented number.

Sample Input 1
3
1 1 1

Sample Output 1
112

Explanation
111 + 1 = 112
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> incrementNumber(int n, vector<int > A){
    vector<int> res;
    int sum = 0,c = 0;
    sum = (A[n-1]+1)%10;
    c = (A[n-1]+1)/10;
    res.push_back(sum);
    for(int i=n-2;i>=0;i--){
        sum = (A[i]+c)%10;
        c = (A[i]+c)/10;
        res.push_back(sum);
    }
    if(c) res.push_back(c);
    reverse(res.begin(),res.end());
    return res;
}


int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
    {
        cin >> i;
    }
    vector<int> result = incrementNumber(n, A);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
}


