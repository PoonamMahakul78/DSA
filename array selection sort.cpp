#include<stdio.h>
int main()
{
	int a[5]={30,20,50,10,40},i,j,temp;
	printf("Before Sorting\n");
	for(i=0;i<=5;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAfter Sorting\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
     return 0;
    }

