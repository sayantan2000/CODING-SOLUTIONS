#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
  int low = 0;
  int high = size - 1;
  int mid = (low + high) / 2;

  while (low <= high)
  {
    if (arr[mid] == key)
      return mid;
    if (key > arr[mid])
    {
      low = mid + 1;
    }
    else
      high = mid - 1;
    mid = (low + high) / 2;
  }
  return -1;
}
//recursive binarysearch
bool binarySearch(int *arr,int size,int key,int high,int low){
  if(low>high) return false;
  int mid=low+(low-high)/2;

  if(arr[mid]==key) return true;

  if(key>arr[mid])
     return binarySearch(arr,size,key,high,mid+1);
  else
     return binarySearch(arr,size,key,mid-1,low); 

}

int firstoccurence(int *arr, int size, int key)
{
  int low = 0;
  int high = size - 1;
  int mid = low + (high - low) / 2;
  int ans = -1;
  while (low <= high)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      high = mid - 1;
    }

    if (key > arr[mid])
      low = mid + 1;
    else
      high = mid - 1;

    mid = low + (high - low) / 2;
  }
  return ans;
}

int lastoccurence(int *arr, int size, int key)
{
  int low = 0;
  int high = size - 1;
  int mid = low + (high - low) / 2;
  int ans = -1;
  while (low <= high)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      low = mid + 1;
    }

    if (key > arr[mid])
      low = mid + 1;
    else
      high = mid - 1;

    mid = low + (high - low) / 2;
  }
  return ans;
}

int FindPeakele(int *arr, int size)
{
  int low = 0;
  int high = size - 1;
  int mid = low + (high - low) / 2;
  while (low < high)
  {
    if (arr[mid] < arr[mid + 1])
      low = mid + 1;
    else
      high = mid;
    mid = low + (high - low) / 2;
  }
}

int main(void)
{
  int arr[5] = {4, 5, 8, 9, 46};

  /*int m_arr[5] = {4, 6, 8, 9, 1};

  int new_arr[5] = {4, 6, 6, 5, 8};

  int search = binarySearch(arr, 5, 460);

  int mele = FindPeakele(m_arr, 5);

  int fist = firstoccurence(new_arr, 5, 6);
  int last = lastoccurence(new_arr, 5, 6);

  cout << "the first occurence of 5 is " << fist << endl;
  cout << "the last occurence of 5 is " << last << endl;
  cout << "The Peak Element of the Mountain Array Is : " << mele << endl;
  if (search > 0)
  {
    cout << "Element is present in ->" << search << "th Position " << endl;
  }

  else
    cout << "the element is not present Within the array";*/
  if(binarySearch(arr,5,8,5,0))
    cout<<"found";
  else
    cout<<"Not Found";
  return 0;

}