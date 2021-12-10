#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void isequal(int arr[], int arr2[], int m, int n)
{

  int k = 0;
  if (m != n)
  {
    cout << "not equal" << endl;
  }
  else
  {

    for (int i = 0; i <m; i++)
    {
      if (arr[i] == arr2[i])
      {
        k = 1;
      }
    }
  }
  if (k == 0)
  {
    cout << "false";
  }
  else
  {
    cout << "True";
  }
}

int main(void)
{
  int arr[4] = {1, 1, 1, 45};
  int arr2[5] = {2, 7, 1, 45,47};
  isequal(arr, arr2, 4, 4);
}