#include<stdio.h>
void main()
{
	int i,j,n;
	printf("\nEnter number of row and columns of your square matrix");
	scanf("%d",&n);
	printf("Given Pattern is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1 && i!=j) 
			printf("%c",'*');
			else if(i==j)
			printf("%c",'*');
			else
			printf(" ");
		}
		printf("\n");
	}
}
