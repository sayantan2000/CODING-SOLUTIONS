#include<iostream>
using namespace std;

bool equal_arr(int *arr,int *arr2,int m,int n){

  if(m!=n)
    return false;

  for (int i = 0; i < n; i++)
{
    if (arr[i] != arr2[i]) return false;
}
return true;
}
int main(void){
  int arr[5]={4,4,4,4,4};
  int arr2[5]={4,4,5,4,4};

  if(equal_arr(arr,arr2,5,5))
    cout<<"true"<<endl;
  else
     cout<<"false";
  return 0;
}