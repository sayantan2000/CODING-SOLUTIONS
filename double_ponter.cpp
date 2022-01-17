#include<iostream>

using namespace std;

int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]-i;
    }
    return sum;
}
int main(void){
    int arr[4]={1,7,9,4};

    cout<<getSum(arr,4);

 
}