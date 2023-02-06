#include<stdio.h>
int main()
{
	int num=187,*ptr;
	ptr=&num;
	if(*ptr%2==0){
		printf("Even number");
	}
	else{
		printf("odd number");
	}
     return 0;
}

