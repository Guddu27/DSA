#include<stdio.h>

bubblesort (int x[], int n)
{
	int t,j,i;

	for(i=0; i<n; i++)
	{
		for(j=0;j<n;j++)
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j] = x[j+1];
				x[j+1] = t;
			}
		}
	}
}

int main()
{
	int x[20], n, i;
	printf("\n\n-------------- Bubble Sort -------------\n\n");
	printf("\n Enter how many number : ");
	scanf("%d",&n);
	printf("\n\n Enter all array elements : \n\n");

	for(i=0;i<n;i++)
	{
		scanf("%d", &x[i]);
	}

	bubblesort(x,n);

	printf("\n\n--------------- Sorted Array ----------------\n\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%d", x[i]);
	}
}
