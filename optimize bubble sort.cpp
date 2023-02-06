#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i,j,temp,check=0;
	printf("Before sorting\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				check=1;
			}
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

