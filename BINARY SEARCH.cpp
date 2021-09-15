#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){
	int a[50],i,b,n;
    printf("Enter the no. of elements of the array");
    scanf("%d",&n);
     
    printf("Enter array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:\n");
    scanf("%d",&b);
   
	int found_index = iterativeBinarySearch(a, 0, n-1, b);
	if(found_index == -1 ) {
		printf("Element not found in the array ");
   }
   else {
		printf("Element found at index : %d",found_index);
   }
   return 0;
}

