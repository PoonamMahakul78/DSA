#include<stdio.h>
void test(int*);
void test(int *a){
	*a=0;
	printf("Inside set function a=%d\n",*a);
	
}
int main()
{
	int a=23;
	printf("Inside main function-Before calling test function a=%d\n",a);
test(&a);
printf("Inside main function-After calling test function a=%d\n",a);
return 0;	
}

