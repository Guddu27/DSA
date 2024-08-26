#include<stdio.h>

insert_sort(int x[], int n)
{
	int next, i, new_ele;
	for(next=1;next<n;next++)
	{
		new_ele = x[next];
		
		for(i = next-1; i>=0 && new_ele < x[i]; i--)
		{
			x[i+1] = x[i];
		}
		
		x[i+1] = new_ele;
	}
}

int main()
{
	int x[20], n, i;

	printf("\n\n------------------ Insertion Sort ---------------------\n\n");
	printf("Enter number limit : ");
	scanf("%d",&n);
	printf("\n\n Enter all array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}

	insert_sort(x,n);

	printf("\n\n------------------- Sorted Array ------------------\n\n");

	for(i=0;i<=n;i++)
	{
		printf("%d",x[i]);
	}
}
