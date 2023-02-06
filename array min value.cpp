#include<stdio.h>
int main()
{
	int a[5]={10,20,30,888,50},i,min=a[0];
	for(i=0;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("min is %d",min);
	return 0;
}

