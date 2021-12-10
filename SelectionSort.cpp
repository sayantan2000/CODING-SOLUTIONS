#include<iostream>
using namespace std;

void selectionSort(int *arr,int size){
    int min=0;
    for(int i=0;i<size;i++){
        min=i;
        for(int j=i+1;j<=size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
            
    }
}
int main(void){
    int arr[5]={5,4,7,9,2};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}