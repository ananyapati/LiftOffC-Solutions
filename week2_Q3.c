#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int count=0,i;
	printf("\nEnter a string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
		count++;
	}
	printf("\nNumber of words in the string=%d",count+1);
}
