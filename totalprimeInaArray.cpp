#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> CountOfPrimeInArr(int *arr,vector<int> &primeCount,int n);
bool isPrime(int n);
vector<int> CountOfPrimeInArr(int *arr,vector<int> &primeCount,int n){
    for(int i=0;i<n;i++){
        if(isPrime(arr[i]))
            primeCount.push_back(arr[i]);
    }
    return primeCount;
}
bool isPrime(int n){
    if(n<=1)
      return false;
    
    for(int i=2;i<n;i++){
        if(i%n==0)
            return false;
    }
    return true;
}

int main(void){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> primeCount;
    CountOfPrimeInArr(arr,primeCount,n);
   // cout<<primeCount.size()<<endl;
    for(int i=0;i<primeCount.size();i++)
        cout<<primeCount[i]<<" ";
    return 0;
}