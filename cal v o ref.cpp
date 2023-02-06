#include<stdio.h>
void swap(int *a,int *b)

{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping inside swap function a=%d,b=%d\n",*a,*b);
}
int main()
{
	int a=10,b=15;
	swap(&a,&b);
	printf("After swapping inside swap function a=%d,b=%d",a,b);
	return 0;
}

