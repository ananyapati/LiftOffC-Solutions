#include<stdio.h>
void main()
{
	int num,a,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		sum+=a;
		num/=10;
		
	}
	printf("\nSum of digits=%d",sum);
}
