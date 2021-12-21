#include<iostream>
using namespace std;
void swaap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void revArr(int *arr,int size){
    int l=0,h=size-1;
    while(l<=h){
        swaap(&arr[l++],&arr[h--]);
    }
}
int main(void){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    revArr(arr,size);
    for(int i:arr){
        cout<<arr[i]<<" ";
    }
}