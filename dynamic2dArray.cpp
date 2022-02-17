#include<iostream>

using namespace std;

void setValue(int **arr,int m,int n){
    cout<<"enter array Values : "<<endl;
   for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
               cin>>arr[i][j];
         }
   }
   
}
void show(int **arr,int m,int n){
     cout<<"The Values Are : "<<endl;
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            cout<<arr[i][j]<<",";
         }
        cout<<endl;
     }

}

int main(void){
    int r,c;
    cout<<"enter row & column : ";
    cin>>r>>c;

    int **arr= new int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new int[c];
    }
  /*for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>arr[i][j];
      }
  }

   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cout<<arr[i][j]<<",";
      }
      cout<<endl;
  }*/
  setValue(arr,r,c);
  show(arr,r,c);
  for(int i=0;i<r;i++){
      delete []arr[i];
  }
  delete [] arr;
}