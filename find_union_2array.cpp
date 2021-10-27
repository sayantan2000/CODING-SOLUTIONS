#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void getunion(int arr[],int arr2[]){
    set<int> s;
   for(int i=0;i<9;i++){
       s.insert(arr[i]);
   }


    for(int i=0;i<10;i++){
       s.insert(arr2[i]);
   } 

   cout << "Number of elements after union operation: " << s.size() << endl;
      cout << "The union set of both arrays is :" << endl;

   for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr<< " ";
}
void getintersection(int arr[],int arr2[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr, arr + n);
    sort(arr2, arr2 + m);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr[i] > arr2[j]) {
            j++;
        }
        else if (arr2[j] > arr[i]) {
            i++;
        }
        else {
             
            // when both are equal
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}
int main(void){
    int arr[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
    int arr2[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };
    //cout<<sizeof(arr2)/sizeof(arr2[0]);
    getunion(arr,arr2);
    getintersection(arr,arr2);
}