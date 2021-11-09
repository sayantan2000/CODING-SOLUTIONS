#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void isequal(int arr[],int arr2[],int m,int n){
 
    
    if(m!=n){
      cout<<"not equal";
    }

     else if(m==n){
         for(int i=0;i<m||n;i++){
             if(arr[i]==arr2[i]){
                
                cout<<"Equal";
             }
             else 
                cout<<"not Equal";
                 
         }
     }
    
     else{
         cout<<"not equal";
     }
     
}

int main(void){
    int arr[]={1,1,1};
    int arr2[]={1,1,10};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
isequal(arr,arr2,m,n);
}