#include<stdio.h>
int rev(int n);
int main()
{
	int num,reverse;
	printf("\nEnter a number:");
	scanf("%d",&num);
	reverse=rev(num);
	if(num==reverse)
	printf("\nPalindrome number");
	else
	printf("Not a palindrome number");
	return 0;
}
int rev(int n)
{
   static int rev_num=0,a;
	if(n!=0)
	{
	a=n%10;
	rev_num=rev_num*10+a;
	rev(n/10);
    }
    return rev_num;
}
