#include <stdio.h>

int linearsearch(int A[], int last, int target, int *location)

{
	int i = 0;

	while (i<last && target != A[i])
	i++;
	
	*location = i;

	return (target == A[i]);
}

int main (void)

{
	int arr[10];
	int x, result, n, index,i;

	printf("\n Enter array limit : ");
	scanf("%d", &n);

	printf("\n Enter all elements of array : ");
	for(i=0;i<n;i++)
		{
		   scanf("%d/t", &arr[i]);	
		}

	printf("\n Enter element to search : ");
	scanf("%d", &x);

	result = linearsearch(arr, n, x, &index);

	if(result)
	   printf("\n Element is present at %d location", index + 1);
	else
	   printf("\n Element not found in array !!");
	
	return 0;	
}
