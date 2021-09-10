/*
Problem Description
Given a string S consisting of lowercase alphabets and spaces.Write a function to replace all spaces in a string with '%20'.

Input format
A single line that contains a string representing the string S.

Output format
Print a string where spaces are replaced with '%20'.

Sample Input 1
hello world

Sample Output 1
hello%20world

Explanation 1
Space between hello and world is replaced by %20.
*/

#include<bits/stdc++.h>
using namespace std;

void replace(string &s) {
    //multicaracter string cannot be assigned in single quotes as : string rep = '%20', will error out
	string rep = "%20"; 
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i] == ' ')
            s.replace(i,1,rep);
    }
}

int main()
{
	string s;
	getline(cin,s);
	replace(s);
	cout << s;
	return 0;
}
