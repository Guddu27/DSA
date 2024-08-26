#include <stdio.h>

int binarysearch(int list[], int last, int target, int *location)

{
	int begin;
	int mid;
	int end;

	begin = 0;
	end = last;

	while (begin <= end)
	{
		mid = (begin + end) /2;
		if( target > list [mid])
		   begin = mid + 1;
		else if (target < list [mid])
	           end = mid - 1;
		else
		   begin = end + 1;
	} // Ending while loop

	*location = mid;
	
	return (target == list[mid]);
}


int main (void)

{
	int arr[10];
	int x, result, n, index, i;

	printf("\n Enter limit of array : ");
	scanf("%d", &n);

	printf("\n Enter all elements of array : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n Enter element to search : ");
	scanf("%d", &x);

	result = binarysearch(arr, x, n, &index);

	if(result)
	   printf("\n\n Element is present at %d location", index + 1);
	else
	   printf("\n Element is not present in the array !!");

	return 0;
}
