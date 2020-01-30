/*
    You are given an odd-length array of integers, in which all of them are the same, except for one single number.
    Complete the method which accepts such an array, and returns that single different number.
    The input array will always be valid! (odd-length >= 3)

    Examples
    [1, 1, 2] ==> 2
    [17, 17, 3, 17, 17, 17, 17] ==> 3
*/

// My solution
#include <stddef.h>

int stray(size_t n, int arr[n]) {

    int i = 1;
    if(arr[0]!=arr[1] && arr[0] != arr[2]) {
      return arr[0];
    }
    for(i;i<n;i++) {
      if(arr[i]!=arr[0]) {
        return arr[i];
      }
    }
    return 0;

}

//Most clever solution:

/*
#include <stddef.h>

int stray(size_t n, int arr[n]) {

  int answer=0;
  for(int i=0;i<n;i++)
  {
    answer^=arr[i];
  }
  
  return answer;

}


*/
