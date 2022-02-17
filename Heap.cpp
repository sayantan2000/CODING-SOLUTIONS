#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void SetData(int *arr,int n){
    for(int i=0;i<n;i++){
      //  arr[i]=i*(i+2);
      cin>>arr[i];
    }

}
void Show(int *arr,int n){
    for(int i=0;i<n;i++)
      cout<<arr[i]<<",";
}

int main(void){
  while (true)
  {
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;

    int *arr=new int[n];
    SetData(arr,n);
    cout<< "Result :"<<endl;
    Show(arr,n);
    delete [] arr;
    cout<<endl;
  }
  
   


 return 0;
}