#include<stdio.h>

select_sort(int x[], int n)
{
	int i, temp, current, pos, smallest;

	for(current = 0; current < n-1; current++)
	{
		smallest = x[current];
		pos = current;
		
		for(i=current+1; i<= n-1; i++)
		{
			if(x[i]<smallest)
			{
				smallest = x[i];
				pos = i;
			}
		}
		temp = x[current];
		x[current] = x[pos];
		x[pos] = temp;
	}
}

int main()
{
	int x[20], n,i;
	printf("\n\n-----------------Selection Sort------------------\n\n");
	printf("\n\n Enter the limit : ");
	scanf("%d", &n);
	printf("\n\n Enter all array elements : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}

	select_sort(x,n);

	printf("\n\n-------------------- Sorted array --------------------\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d", x[i]);
	}	
}
