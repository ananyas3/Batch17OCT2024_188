A4. rotate array every kth element
1 2 3 4 5 6 7 8 9
k= 3
3 2 1 6 5 4 9 8 7

#include <stdio.h>
void rotate_array(int arr[], int n, int k) 
{
    for (int i = 0; i < n; i += k) 
    {
        int left = i;
        int right = (i+k-1<n)? i + k-1:n-1;
      while (left<right) //reverse from left to right
     {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
int main () 
{
       int k = 3;
       int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
       int n = sizeof(arr)/sizeof(arr[0]);

   printf("original array:");
    for (int i=0; i<n; i++) 
   {
        printf("%d ", arr[i]);
    }
    Printf("\n");
rotate_array(arr, n, k);
Printf("\nArray after rotating every %d elements:", k);
    for (int i = 0; i < n; i++)
   {
        printf("%d ", arr[i]);
    }
    Printf("\n");
 Return 0;
}
