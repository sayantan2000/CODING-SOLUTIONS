#include<iostream>
using namespace std;
void swaap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int *arr,int size){
    int min=0;
    for(int i=0;i<size;i++){
        min=i;
        for(int j=i+1;j<=size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swaap(&arr[min],&arr[i]);
            
    }
}

void bubblesort(int *arr,int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1])
              swaap(&arr[j],&arr[j+1]);
        }
    }
}


int main(void){
    /// checking the swaap function 
    int a=9,b=8;
    swaap(&a,&b);
    cout<<"A="<<a<<"--------"<<"B="<<b<<endl;
    //---1st array---
    int arr[5]={5,4,7,9,2};
//-----2nd array------
    int arer[6]={2,4,7,9,8,-1};
    //----------------------------(calling Selection Sort )
    selectionSort(arr,5);
//--------------------------(calling Bubble Sort)
    bubblesort(arer,6);
    
    for(int i=0;i<5;i++){//---printing the array after sort
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //----printing a divider for better understanding;;
    cout<<"-------------------"<<endl;
    for(int i=0;i<6;i++){// ----printing the array after sort
        cout<<arer[i]<<" ";
    }
    
     
}