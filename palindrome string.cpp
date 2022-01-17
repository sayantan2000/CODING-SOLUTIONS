 string S is equal to the string P and then print “Yes“. Otherwise, print “No“.
Below is the implementation of the above approach:


// C++ program for the above approach
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}
 
// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}