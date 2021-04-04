#include<stdio.h>
int Fact(int a);
int main()
{
	int Num,Res;
	printf("\nEnter a number:");
	scanf("%d",&Num);
	Res=Fact(Num);
	printf("\nFactorial of the number is:%d",Res);
	return 0;
}
int Fact(int a)
{
	if(a==1)
	return 1;
	else
	return a*Fact(a-1);
}
