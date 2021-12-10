#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    int mid=low+(low-high/2);

    while (low<=high){
        if(arr[mid]==key)
          return mid;
        if(key>arr[mid]){
            low=mid+1;
        }
        else
           high=mid-1;
    mid=low+(low-high/2);
    return -1;
    
    }
    
    
    
}
int main(void){
    int arr[5]={4,5,8,9,46};
    int search=binarySearch(arr,5,8);
    cout<<"The element is present in "<<search<<" \t Index"<<endl;
}