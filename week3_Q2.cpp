#include<stdio.h>
int Fact(int n);
int main()
{
	int num,Factorial;
	printf("\nEnter a number:");
	scanf("%d",&num);
	Factorial= Fact(num);
	printf("\nThe factorial of the number is:%d",Factorial);
	return 0;
}
int Fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
