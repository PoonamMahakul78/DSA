#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("enter your name to reversed");
	gets(str);
	printf("after reversing the name is %s",strrev(str));
	return 0;
}
