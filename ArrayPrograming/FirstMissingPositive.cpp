/*
Problem Description
Given an unsorted array of integers, find the smallest missing positive integer. The space complexity need not be O(1), you can also implement a O(N) space complexity solution.

Input format
There are 2 lines of input.
First line contains 1 integer N - Number of elements in the array.
Second line contains space separated N integers.

Output format
Print the smallest missing positive integer.

Sample Input 1
4
3 4 -1 1

Sample Output 1
2
*/

#include <bits/stdc++.h>
using namespace std;

class FirstMissingPositive {
  public:
    int firstMissingPositive(vector<int> nums) {
        int i=0;
        unordered_set<int> s;
        //insert all array elements in set, and start finding numbers from 1 until we find the first element not in set
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        while(++i){
            if(s.find(i)!=s.end()){
                continue;
            }
            else
                break;
        }
        return i;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int result = FirstMissingPositive().firstMissingPositive(nums);
    cout << result;
    return 0;
}
