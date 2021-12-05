#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

void alter(int arr[],int size);
void printArr(int arr[]);

 void alter(int arr[],int size){
     for(int i=0;i<size;i+=2){
         if(i+1<size)
           swap(arr[i],arr[i+1]);
     }cout<<endl;

}
void printArr(int arr[],int size){
    //int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}
int main(void){
    int arr[6]={6,4,7,8,9,10};
    sort(arr,arr+6);

  //  alter(arr,6);
    printArr(arr,6);
}