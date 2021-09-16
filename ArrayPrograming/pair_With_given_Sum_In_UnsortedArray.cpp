/*
Problem Description
Given an array of integers as input, output the indices of two numbers in the array which add up to a specified target.
Assume that each input would have exactly one solution and you cannot use the same element twice. If 2 different elements have the same value, they can be used.
Print the indices in increasing order.

Input format
First line contains an Integer N that represents the number of elements in the array.
Second line contains N space separated integers, which are members of the array.
Third line contains an integer X, which is the target value.

Output format
Print two space separated indices(in increasing order) of the numbers which add up to the specified target.

Constraints
2 <= Length of array <= 100000
1 <= Range of values <= 1000000

Sample Input 1
5 --> Number of elements in array
2 4 5 9 8 --> Array elements
7 --> Target sum value

Sample Output 1
0 2

Explanation 1
Since 0 and 2 are the indices where the numbers 2 and 5 which add up to 7 are seen
*/

#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"

using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> m;
        if(nums.size()==0) return vector<int>(2,0);
        for(int i=0;i<nums.size();i++){
            m.insert({nums[i],i});
        }
        for(int i=0;i<nums.size();i++){
            if (m.find(target - nums[i]) != m.end() 
                && i!=m[target-nums[i]])// two indices shd not be same
            {
                 v.push_back(i);  
                 v.push_back(m[target-nums[i]]);
                 if(i > m[target-nums[i]])
                    swap(v[0],v[1]);
                return v;
            }
        }
        return v;
    }
};

int main() {
    FastIO();
    int n, target;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);
    cin >> target;
    vector<int> result = TwoSum().twoSum(nums, target);
    PrintMatrix<int>().OneDMatrix(result, " ");
    return 0;
}
