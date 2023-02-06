#include<stdio.h>
int main()
{
	int num[10],i;
	printf("Enter 10 number\n");
	for(i=10;i<10;i++){
		printf("Enter element no %d\n",i+1);
		scanf("%d",&num[i]);
	}
	printf("------------------\n");
	printf("THE EVEN NUMBERS ARE::\n");
	printf("-----------------\n");
	for(i=0;i<10;i++){
		if(num[i]%2==0);
		printf("The element number %d is %d\n",i+1,num[i]);
	}
     return 0;
}

