#include<stdio.h>
#include<string.h>
#include<math.h>
struct ptr{
	int a,a1,b,b1,distance;
};
struct ptr p;
int main()
{
	int a,a1,b,b1,distance;
	printf("Enter the value of(a,a1)\n");
	scanf("%d %d",&p.a,&p.a1);
	printf("Enter the value of (b,b1)\n");
	scanf("%d %d",&p.b,&p.b1);
	p.distance=sqrt((p.a1-p.a1)*(p.a1-p.a)+(p.b1-p.b)*(p.b1-p.b));
	printf("Distance between two integer point is %d\n",p.distance);
	return 0;
}

