/******************************************************************************
// C++ Binary Search
// To execute this snippet you can use https://www.onlinegdb.com/ and select C++
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
 
// Search key - x
// Array length - n
// It returns index of 'x' in given array 'arr' if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int mid = l + (r - l) / 2; 
 
        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;
 
        // If x greater, pick right half
        if (arr[mid] < x)
            l = mid + 1;
 
        // If x is smaller, pick left half
        else
            r = mid - 1;
    }
 
    // If search key 'x' is not found in 'arr' then 
    return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };

    // Search key is x
    int x = 10;
  
    // In this arr has 5 elements so size of array will be
    // size of entire array divided by size of a single element 
    // in the array
    int n = sizeof(arr) / sizeof(arr[0]);
  
    int result = binarySearch(arr, 0, n - 1, x);
    
    // Printing the result
    if(result == -1) {
      cout << "Search key is not present in array";
    } else {
      cout << "Search key is present at index " << result;
    }
  
    return 0;
}
