/*
Problem Description
Given a string S which consists of both lowercase and uppercase alphabetical letters, you have to write a function to check if string S is a permutation of a palindrome or not. Note: Characters are case sensitive i.e. ‘a’ is not the same as ‘A’.

Input format
First line contains an integer representing the value of T, the number of test cases.
In next T lines each line contains the string S.

Output format
For each test case, print "True"(without quotes) if it is a permutation of a palindrome and "False" otherwise.

Constraints
1 <= T <= 10
1 <= length(S) <= 100000

Sample Input 1
3
nnaamm
hello
Aab

Sample Output 1
True
False
False

Explanation 1
nnaamm is a permutation of namman, which is a palindrome
hello is not a permutation of any palindrome
Aab is not a permutation of any palindrome
*/

#include<bits/stdc++.h>
using namespace std;

bool isPermutationPalindrome(string &s) {
	int freq[256] = {0};
	for(int i=0;i<s.size();i++)
		freq[s[i]]++;
	int odd = 0;
	for(int i=0;i<256;i++){
		if(freq[i] & 1) 
			odd++;
		if(odd>1) return false;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		bool answer = isPermutationPalindrome(s);
		if(answer) {
			cout << "True\n";
		} else {
			cout << "False\n";
		}
	}
	return 0;
}
