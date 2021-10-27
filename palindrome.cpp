#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    
 return str;
}
bool palindrome(string str,string str2){
   if(str.compare(str2)>0)
     return true;
return false;
}

int main(void){
    string name;
    cout<<"Enter Your name :";
    cin>>name;
    string str=reverseStr(name);
    cout<<str<<endl;
    palindrome(name,str)?cout<<"palindrome":cout<<"not palindrome";
    
    
}