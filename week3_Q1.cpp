#include<stdio.h>
int sqr(int a);
int main()
{
	int num,Square;
	printf("\nEnter a number:");
	scanf("%d",&num);
	Square = sqr(num);
	printf("\nSquare of the number is:%d",Square);
	return 0;
}
int sqr(int a)
{
	int c;
	c=a*a;
	return c;
}
