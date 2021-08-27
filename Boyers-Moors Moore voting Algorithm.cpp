// Online C++ compiler to run C++ 
//programInput :{1,1,1,1,2,3,5}
//Output : 1
//Explanation : 1 occurs more than 3 times.
//Input : {1,2,3}
//Output : -1
/*
Dry run for the above example: 
Given :
  arr[]=        1    1    1    1    2    3    5
 votes =0       1    2    3    4    3    2    1
 candidate = -1 1    1    1    1    1    1    1
 candidate = 1  after first traversal
                1    1    1    1    2    3    5
 count =0       1    2    3    4    4    4    4 
 candidate = 1  
 Hence count > 7/2 =3
 So 1 is the majority element.
*/
// C++ implementation for the above approach
#include <iostream>
using namespace std;
// Function to find majority element
int findMajority(int arr[], int n)
{
	int i, candidate = -1, votes = 0;
	// Finding majority candidate
	for (i = 0; i < n; i++) {
		if (votes == 0) {
			candidate = arr[i];
			votes = 1;
		}
		else {
			if (arr[i] == candidate)
				votes++;
			else
				votes--;
		}
	}
	int count = 0;
	// Checking if majority candidate occurs more than n/2
	// times
	for (i = 0; i < n; i++) {
		if (arr[i] == candidate) {
			count++;
		}
	}

	if (count > n / 2)
		return candidate;
	else
		return -1;
}
int main()
{
	int arr[] = { 1, 1, 1, 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int majority = findMajority(arr, n);
	cout << " The majority element is : " << majority;
	return 0;
}
