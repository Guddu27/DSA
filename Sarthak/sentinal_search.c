#include <stdio.h>

int sentinalsearch(int A[], int last, int target, int *location)

{
	int i = 0;
	A[last] = target;

	for(i=0;i<=last;i++)
		printf("%d", A[i]);
	i = 0;
	while (target != A[i])
	i++;

	*location = i;
	
	if(i==last)
	   return 0;
	else
	   return (target == A[i]);
}

int main (void)

{
	int arr[10];
	int x, result, n, index, i;

	printf("\n Enter array limit : ");
	scanf("%d", &n);

	printf("\n Enter all array elements : ");

	for(i=0;i<n;i++)
	{
	    scanf("%d", &arr[i]);
	}

	printf("\n Enter element to search : ");
	scanf("%d", &x);

	result = sentinalsearch(arr, n, x, &index);

	if(result)
	   printf("\n Element is present at %d location", index +1);
	else
           printf("\n Element is not present in the array ! ");

	return 0;

}
