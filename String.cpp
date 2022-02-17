#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;
string reverseString(string str){
   int i=0,j=str.length()-1;
   while(i<=j){
      swap(str[i++],str[j--]);
   }
   return str;
}

int main(void){

   string str="madam";
   // int l=str->len(str->str);
   // cout<<str.length();
   string rt=reverseString(str);
   bool flag=str.compare(rt);
   if(flag>0){
      cout<<"flase";
   }
   else{
      cout<<"True";
   }
}