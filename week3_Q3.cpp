#include<stdio.h>
int fun(int a,int b);
int main()
{
	int n1,n2,LCM,HCF;
	printf("\nEnter two numbers:");
	scanf("%d %d",&n1,&n2);
	HCF=fun(n1,n2);
	LCM=(n1*n2)/HCF;
	printf("\nGCD of the numbers is:%d",HCF);
	printf("\nLCM of the numbers is:%d",LCM);
	return 0;
	
}
int fun(int a,int b)
{
	if(b==0)
	return a;
	else
	return fun(b,a%b);
}
