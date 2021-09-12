/*
Problem Description
Given two strings s and t, write a function to determine if t is an anagram of s.
Note: You may assume the string contains only lowercase alphabets.

Input format
You will be given two strings in two separate lines.

Output format
Print "true" if both the strings are anagram otherwise “false”.

Sample Input 1
anagram
nagaram

Sample Output 1
true

Sample Input 2
rat
car

Sample Output 2
false
*/

#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"

using namespace std;

class ValidAnagram {
    public:
        bool validAnagram(string s, string t) {
            if(s.size()!=t.size()) return false;
            int freq[256] = {0};
            for(int i=0;i<s.size();i++)
                freq[s[i]]++;
            for(int i=0;i<t.size();i++)
                freq[t[i]]--;

            for(int i=0;i<256;i++){
                 if(freq[i]>0) return false;
            }
            return true;
        }
};

int main() {
    FastIO();
    string s, t;
    getline(cin, s);
    getline(cin, t);
    bool result = ValidAnagram().validAnagram(s, t);
    cout<< boolalpha << result;
    return 0;
}
