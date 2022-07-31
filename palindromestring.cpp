// string S is equal to the string P and then print “Yes“. Otherwise, print “No“.
//Below is the implementation of the above approach:


// C++ program for the above approach
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
bool isPalindrome(char *s,int l){
    int n = l;
    int i = 0;
    while(i<=n)
        if(s[i++] != s[n--])
            return false;
    return true;
    
}
 
// Driver Code
int main()
{
    
    isPalindrome("mam",2)? cout << "Yes" : cout << "No";
 
    return 0;
}