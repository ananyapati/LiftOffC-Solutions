#include<stdio.h>
void main()
{
	int a[10],max,min,i,n;
	printf("\nEnter number of elements in your array:");
	scanf("%d",&n);
	if(n>10)
	n=10;
	printf("\nEnter your array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		else if(a[i]<min)
		min=a[i];
	}
	printf("\nLargest number=%d",max);
	printf("\nSmallest number=%d",min);
}
