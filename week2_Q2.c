#include<stdio.h>
void main()
{
	int arr[10],sum1=0,sum2=0,n,i;
	printf("\nEnter number of elements in your array:");
	scanf("%d",&n);
	if(n>10)
	n=10;
	printf("\nEnter your array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		sum1+=arr[i];
		else if(i%2==0)
		sum2+=arr[i];
	}
		printf("\nSum of even elements are:%d",sum1);
		printf("\nSum of even postion elements are:%d",sum2);
}
