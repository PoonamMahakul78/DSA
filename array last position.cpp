#include<stdio.h>
int main()
{
	int a[7]={10,20,10,30,40,50},i,ele=999;
	a[6]=ele;
	for(i=0;i<7;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
