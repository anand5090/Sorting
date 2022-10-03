/*
#include <iostream>
using namespace std;
int binary_Search(int array[],int x,int low,int high)
{
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
int main(void)
{
    int array[]={10,24,8,36,75,12,34};
     int result=binary_Search(array,8,0,6);
    cout<<result;
    
}

*/




#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  //int x = 4;
  //int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, 7, 0,6 );
  cout<<result;
 
 // if (result == -1)
  //  printf("Not found");
  //else
   // printf("Element is found at index %d", result);
}
