#include<stdio.h>
struct greatest{
	int num1,num2,num3;
};
struct greatest g;
int main()
{
	int num1,num2,num3;
	printf("enter the value of num1\n");
	scanf("%d",&g.num1);
	printf("enter the value of num2\n");
	scanf("%d",&g.num2);
	printf("enter the value of num3\n");
	scanf("%d",&g.num3);
	if((g.num1>g.num2)&&(g.num1>g.num3)){
		printf("num1 is greater\n");
	}
	else if((g.num2>g.num3)&&(g.num2>g.num3)){
		printf("num2 is greater\n");
	}
	else{
		printf("num3 is greater\n");
	}
}

