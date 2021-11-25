
// C++ code for linear search
// Compare every single element in the array 
// with the search key
#include <iostream>
using namespace std;
 
int linearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver code
int main(void)
{
    // arr - array of element
    int arr[] = { 2, 3, 4, 10, 40 };
  
    // x - search key
    int x = 10;
  
    // n - size of array (found by dividing size of 
    // entire array by size of single element from the array
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    int result = linearSearch(arr, n, x);
    (result == -1)
        ? cout << "Element is not in the array :-("
        : cout << "Element found at position :" << result;
    return 0;
}
