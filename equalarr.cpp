#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void isequal(int arr[],int arr2[],int m,int n){
 
    int k=0;
    if(m!=n){
      cout<<"not equal"<<endl;
    }
    else{
         if(m==n){
          for(int i=0;i<m||n;i++){
             if(arr[i]==arr2[i]){
                  k=1;
             }
                 
         }
     }

    }

    
    
  if(k==0){
    cout<<"false";
  }
   else {      cout<<"True";}
     
}

int main(void){
    int arr[]={1,1,1,45};
    int arr2[]={1,1,1,45};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
isequal(arr,arr2,m,n);
}