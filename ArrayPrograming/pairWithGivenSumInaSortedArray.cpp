/*
Problem Description
Given a sorted array of integers and a target, find if there’s a pair of elements that add up to the target. Return true if such a pair can be found, and false otherwise.

Input format
There are 3 lines of input.
First line contains an Integer N that represents the number of elements in the array.
Second line contains N space separated integers, which are members of the array.
Third line contains an integer X, which is the target value.

Output format
Print "Present" if there is such a pair present in the array otherwise print "Not Present".

Sample Input 1
5 --> Number of elements in array
2 4 5 8 9 --> Array elements
7 --> Target sum value

Sample Output 1
Present

Explanation 1
Since 0 and 2 are the indices where the numbers 2 and 5 which add up to 7 are seen
*/

#include <bits/stdc++.h>
using namespace std;

bool twoSumInSortedArray(int n, vector<int> arr, int target){
    int i=0,j=n-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(target < sum) j--;
        if(target > sum) i++;
        if(target == sum) return true;
    }
    return false;  
}

int main(){
    int n;
    cin>>n;
    vector<int > arr(n);
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int target;
    cin >> target;
    bool ans = twoSumInSortedArray(n, arr, target);
    cout << (ans ? "Present" : "Not Present") << "\n";
}
